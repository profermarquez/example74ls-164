#define data 3
#define clock 2

const int pinBuzzer = 9; //Constante que contiene el numero del pin de Arduino al cual conectamos un buzzer pasivo

const int frecuencias[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};//Arreglo que contiene las frecuencias que queremos escuchar en nuestro buzzer
const int numFrecuencias = 10;

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
    tone(pinBuzzer, frecuencias[i]);
    
  }
  noTone(pinBuzzer);
  } 
