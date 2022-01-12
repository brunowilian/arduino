
int ledd = 10;
int led = 9;
int leda = 11;
 
int sensor = A0;
 

int sensorValue = 0;
 
void setup() {
  

  pinMode(led, OUTPUT);
  pinMode(ledd, OUTPUT);
  pinMode(leda, OUTPUT);
  

  pinMode(sensor, INPUT);
  
 
  Serial.begin(9600);
}
 
void loop(){
  
  
  sensorValue = analogRead(sensor);
  
  
 
  
  if (sensorValue < 200 && sensorValue > 1) {
      digitalWrite(ledd, HIGH);
      digitalWrite (led, LOW);
      digitalWrite (leda, LOW);
  }
 
  if (sensorValue < 400 && sensorValue > 200) {
    digitalWrite (ledd, LOW);
    digitalWrite (led, HIGH);
    digitalWrite (leda, LOW);
  }
  
  if (sensorValue < 600 && sensorValue > 400){
    digitalWrite (ledd, LOW);
    digitalWrite (led, LOW);
    digitalWrite (leda, HIGH);
  }
  
  if (sensorValue < 600 ){
  digitalWrite (leda, LOW);
  }
  

  
  Serial.print ("Leitura atual do sensor: ");
  Serial.println(sensorValue);
  delay(130);
}
