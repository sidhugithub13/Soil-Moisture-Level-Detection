//soil moisture sensor with Arduino uno 

int sensorPin = A0; // select the input pin for the potentiometer 
int sensorValue = 0; // variable to store the value coming from the sensor 
void setup(){ 
  pinMode(sensorPin, INPUT); 
  Serial.begin(9600); 
} 

void loop(){ 
  sensorValue = analogRead(sensorPin);   
 Serial.print("Moisture Sensor Value:"); 
 Serial.println(sensorValue);  
 //Display the Moisture Percentage 
 float moisturePercentage; 
 moisturePercentage= (sensorValue/1023)*100; 
 Serial.print("Moisture Percentage = "); 
 Serial.print(moisturePercentage); 
 Serial.print("%\n"); 
 if(sensorValue < 300){ 
  Serial.println("I am thirsty, please give me water"); 
 } else if(sensorValue > 300 && sensorValue < 700){ 
  Serial.println("I feel so comfortable"); 
 }  if(sensorValue > 700){ 
  Serial.println("Too much water, I might get hurt"); 
 } 
 Serial.print("\n"); 
 delay(500); 
}
