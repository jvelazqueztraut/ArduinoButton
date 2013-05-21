boolean estadoA = true;
boolean botonA = true;
boolean estadoB = true;
boolean botonB = true;
int milisA = 0;
int milisB = 0;

void setup(){
  Serial.begin(9600);
  pinMode(9, INPUT);
  digitalWrite(9, HIGH);
  pinMode(11, INPUT);
  digitalWrite(11, HIGH);
 // Serial.println("empezamos el viaje");
}

void loop(){
  
  botonA= digitalRead(9);
  
  if(botonA==true){
    if(estadoA!=botonA){
      Serial.println('a');
      estadoA=true;
    }
    if(milisA)
      milisA=0;
  }
  else {
    if(estadoA!=botonA){
        Serial.println('2');
        estadoA=false;
    }
    milisA++;
    if(milisA==1500)
      Serial.println('1');
  }
  delay(1);
  
  botonB= digitalRead(11);
  
  if(botonB==true){
   if(estadoB!=botonB){
      Serial.println('b');
      estadoB=true;
   }
   if(milisB)
     milisB=0; 
  } 
  else {
    if(estadoB!=botonB){
        Serial.println('2');
        estadoB=false; 
    }
    milisB++;
    if(milisB==1500)
      Serial.println('1');
  }
  delay(1);
}
  
  
