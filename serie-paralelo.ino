#define data 3
#define clock 2

void setup()
{
  pinMode(clock, OUTPUT); // make the clock pin an output 74ls 164
  pinMode(data , OUTPUT); // make the data pin an output

  
}

void loop(){
  for(int i = 0; i < 8; ++i) // del led 1 al 7 hacer
  {
    shiftOut(data, clock, MSBFIRST, 1 << i); //  LSBFIRST para cambiar el orden de los leds
    delay(500); // retraso
  }
  } 
