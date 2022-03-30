const int led = 3; 
const int pot = 0; 

void setup()
{
  pinMode(Led, OUTPUT); 
  Serial.begin(9600);
}

int var;
int var2;
void loop()
{
  var = analogRead(pot);
  var2 = map(var, 0, 1023, 0, 255);
  serial.print ("pot: ");
  serial.println (var);  
  serial.print("map: ");
  serial.println (var2);
  analogWrite (led, var2);
  delay (100);
}
