// Sets initial value to 0
#define CDS_INPUT 0 
float average=0;
int n=1;

void setup() {
  Serial.begin(9600);
  
}
void loop() {

  int value = analogRead(CDS_INPUT);
  

  average = ((average * (n-1)) + value)/n ;

  n = n + 1;

  Serial.println("Average Intensity of light in lux");
  
  Serial.println(average);
  
  Serial.println("lux \n");

   delay(1000);
}
