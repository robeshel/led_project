//LED PROJECT 11/14/2018

int redPin = 8;
int greenPin = 10;
int bluePin = 12;
int x = 0;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
}

void loop() {

  
  
  /*
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(255, 0, 255);  // purple
  delay(1000);
  
  setColor(0, 255, 255);  // aqua
  delay(1000);
  */
  
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
