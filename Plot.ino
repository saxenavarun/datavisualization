// Sets initial value to 0
#define CDS_INPUT 0 

void setup() {
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(CDS_INPUT);
  
  Serial.println(" Intensity of light in lux");
  
  //Prints value of light intensity in lux
  
  Serial.println(value);
  
  Serial.println("lux \n");
  
  delay(1000);
}

