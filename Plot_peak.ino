// Sets initial value to 0
#define CDS_INPUT 0
  float peak=0;
  
void setup() {
  Serial.begin(9600);
  
}

void loop() {

  int value = analogRead(CDS_INPUT);
  if (value > peak)
{
  peak = value ;

  Serial.println("  Peak Intensity of light in lux");
  
  Serial.println(peak);
  
  Serial.println("lux \n");

    
  delay(1000);
}
else
{
  Serial.println("  Peak Intensity of light in lux");
  
  Serial.println(peak);
  
  Serial.println("lux \n");

    
  delay(1000);
  
  }
  
}

