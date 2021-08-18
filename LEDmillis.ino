//-----Declaración de variables-------
const byte LedRojo=2;
const byte LedAzul=3;
const byte LedAmarillo=4;
const byte LedVerde=5;
const byte LedNaranja=6;
//-----Declaramos una variables unsigned para no tener problemas------
unsigned long milisActuales=0;
unsigned long milisPrevios1=0;
unsigned long milisPrevios2=0;
unsigned long milisPrevios3=0;
unsigned long milisPrevios4=0;
unsigned long milisPrevios5=0;
//-----Declaramos los intervalos necesarios para las velocidades de encendido--
const long intervaloRojo=500;
const long intervaloAzul=1000;
const long intervaloAmarillo=1500;
const long intervaloVerde=2000;
const long intervaloNaranja=2500;

void setup()
{
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAzul,OUTPUT);
  pinMode(LedAmarillo,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(LedNaranja,OUTPUT);
}

void loop()
{
  milisActuales=millis();
  if ((milisActuales-milisPrevios1)>=intervaloRojo){
    milisPrevios1=milisActuales;
    digitalWrite(LedRojo,HIGH);
  }
  else{
    digitalWrite(LedRojo,LOW);
    }
  if ((milisActuales-milisPrevios2)>=intervaloAzul){
    milisPrevios2=milisActuales;
    digitalWrite(LedAzul,HIGH);
  }
  else{
    digitalWrite(LedAzul,LOW);
    }
  if ((milisActuales-milisPrevios3)>=intervaloAmarillo){
    milisPrevios3=milisActuales;
    digitalWrite(LedAmarillo,HIGH);
  }
  else{
    digitalWrite(LedAmarillo,LOW);
    }
   if ((milisActuales-milisPrevios4)>=intervaloVerde){
    milisPrevios4=milisActuales;
    digitalWrite(LedVerde,HIGH);
  }
  else{
    digitalWrite(LedVerde,LOW);
    }
  if ((milisActuales-milisPrevios5)>=intervaloNaranja){
    milisPrevios5=milisActuales;
    digitalWrite(LedNaranja,HIGH);
  }
  else{
    digitalWrite(LedNaranja,LOW);
    }
}
