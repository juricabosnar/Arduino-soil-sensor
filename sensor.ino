/****************** code made by PARTH SANTOSH KUNNIR************/
/****************** code is subjected to copy right**************/

int moistPin = 0;
int moistVal = 0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  moistVal = analogRead(moistPin);
  Serial.println(moistVal);
  int percent = 2.718282 * 2.718282 * (.008985 * moistVal + 0.207762); //calculate percent for probes about 1 - 1.5 inches apart
  Serial.print(percent);
  Serial.println("% Moisture ");
  if(percent<50)
  {digitalWrite(13,HIGH);}// if the sensor value is below 50% led on your nano will glow else it is off
  
  else
  {digitalWrite(13,LOW);} 

  delay(250); // for stability 
}
