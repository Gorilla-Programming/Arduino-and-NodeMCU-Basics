#include <SPI.h>

char buff [15];
volatile byte asdf;
volatile bool receivedone;  /* use reception complete flag */

void setup (void)
{
  Serial.begin (9600);
  SPCR |= bit(SPE);         /* Enable SPI */
  pinMode(MISO, OUTPUT);    /* Make MISO pin as OUTPUT */
  asdf = 0;
  receivedone = false;
  SPI.attachInterrupt();    /* Attach SPI interrupt */
}

void loop (void)
{
  if (receivedone)          /* Check and print received buffer if any */
  {
    buff[asdf] = 0;
    Serial.println(buff);
    asdf = 0;
    receivedone = false;
  }
}
ISR(SPI_STC_vect)
{
  uint8_t oldsrg = SREG;
  cli();
  char c = SPDR;
  if (asdf <sizeof buff)
  {
    buff [asdf++] = c;
    if (c == '\n'){     /* Check for newline character as end of msg */
     receivedone = true;
    }
  }
  SREG = oldsrg;
}
