// Sets initial value to 0
#define CDS_INPUT 0 
  float average=0;
  float peak=0;
  int n=1;
void setup() {
  Serial.begin(9600);
  
}

void loop() {

  int value = analogRead(CDS_INPUT);
  
 // Serial.println(" Intensity of light in lux");
  
  //Prints value of light intensity in lux
  
 // Serial.println(value);
  
 // Serial.println("lux \n");
 
 //  delay(1000);
  

  average = ((average * (n-1)) + value)/n ;

  n = n + 1;

  Serial.println("Average Intensity of light in lux");
  
  Serial.println(average);
  
  Serial.println("lux \n");

   delay(1000);

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

