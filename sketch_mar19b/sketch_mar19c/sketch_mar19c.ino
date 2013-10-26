int ledPins[] = { 2,3,4,5,6,7,8,9};
int delayTime = 100;

void setup()
{
//  for (int i = 0; i < 8; ++i)
//  {
//    pinMode(ledPins[i], OUTPUT);
//  }
}

void loop()
{
  //oneAfterAnotherNoLoop();
//  oneAfterAnotherLoop();
  //oneOnAtATime();
  //marquee();
//  randomLED();
}

void randomLED()
{
  int index;
  int delayTime;
  
  index = random(8);
  delayTime = 100;
  
  digitalWrite(ledPins[index], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[index], LOW);
}

void marquee()
{
  for (int i = 0; i < 2; ++i)
  {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i+2], HIGH);
    digitalWrite(ledPins[i+4], HIGH);
    digitalWrite(ledPins[i+6], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[i+2], LOW);
    digitalWrite(ledPins[i+4], LOW);
    digitalWrite(ledPins[i+6], LOW);
  }
}

void oneOnAtATime()
{
  for (int i = 0; i < 8; ++i)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 7; i >= 0; --i)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}

void oneAfterAnotherLoop()
{
  for (int i = 0; i < 8; ++i)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  }
  for (int i = 7; i >= 0; --i)
  {
    digitalWrite(ledPins[i], LOW);
    delay(delayTime);
  }
}

void oneAfterAnotherNoLoop()
{
  digitalWrite(ledPins[0], HIGH);  //Turns on LED #0 (pin 2)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[1], HIGH);  //Turns on LED #1 (pin 3)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[2], HIGH);  //Turns on LED #2 (pin 4)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[3], HIGH);  //Turns on LED #3 (pin 5)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[4], HIGH);  //Turns on LED #4 (pin 6)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[5], HIGH);  //Turns on LED #5 (pin 7)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[6], HIGH);  //Turns on LED #6 (pin 8)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[7], HIGH);  //Turns on LED #7 (pin 9)
  delay(delayTime);                //wait delayTime milliseconds  
 
  // turn all the LEDs off:
  
  digitalWrite(ledPins[7], LOW);   //Turn off LED #7 (pin 9)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[6], LOW);   //Turn off LED #6 (pin 8)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[5], LOW);   //Turn off LED #5 (pin 7)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[4], LOW);   //Turn off LED #4 (pin 6)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[3], LOW);   //Turn off LED #3 (pin 5)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[2], LOW);   //Turn off LED #2 (pin 4)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[1], LOW);   //Turn off LED #1 (pin 3)
  delay(delayTime);                //wait delayTime milliseconds
  digitalWrite(ledPins[0], LOW);   //Turn off LED #0 (pin 2)
  delay(delayTime);                //wait delayTime milliseconds  
}
