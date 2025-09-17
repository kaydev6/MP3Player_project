#define playButtonPin 25
#define skipButtonPin 33 
#define prevButtonPin 26

int playButtonState = 0;
int skipButtonState = 0;
int prevButtonState = 0;

void setup() {
  Serial.begin(115200);

  pinMode(playButtonPin, INPUT_PULLUP);
  pinMode(skipButtonPin, INPUT_PULLUP);
  pinMode(prevButtonPin, INPUT_PULLUP);

  delay(2000);
}

void loop() {
  playButtonState = digitalRead(playButtonPin);
  skipButtonState = digitalRead(skipButtonPin);
  prevButtonState = digitalRead(prevButtonPin);

  Serial.print("playButtonState is: ");
  Serial.println(playButtonState);

  Serial.print("skipbuttonState is: ");
  Serial.println(skipButtonState);

  Serial.print("prevButtonState is: ");
  Serial.println(prevButtonState); 
  

}
