boolean estadoA = false;
boolean botonA = false;
boolean estadoB = false;
boolean botonB = false;
int milis = 0;

void setup(){
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(11, INPUT);
  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
 // Serial.println("empezamos el viaje");
}

void loop(){
  
  botonA= digitalRead(9);
  
  if(botonA == true){
    if(estadoA !=botonA)
        Serial.println('2');
    milis++;
    if(milis>1500 && milis < 1502){
      Serial.println('1');
     
    }
  estadoA = true;  
  } else {
    if(estadoA!= botonA)
      Serial.println('a');
    milis = 0;
    estadoA = false;
  }
  delay(1);
  
  botonB= digitalRead(11);
  
  if(botonB == true){
    if(estadoB!=botonB)
        Serial.println('2');
    milis++;
    if(milis>1500 && milis < 1502){
      Serial.println('1');
     
    }
  estadoB = true;  
  } else {
    if(estadoB!= botonB)
      Serial.println('b');
    milis = 0;
    estadoB = false;
  }
  delay(1);
  
}
  
  
