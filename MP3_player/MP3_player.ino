#include <HardwareSerial.h>
#include <DFRobotDFPlayerMini.h>

HardwareSerial mySerial(1);
DFRobotDFPlayerMini DFPlayer;

#define playButtonPin 25
#define skipButtonPin 33 
#define prevButtonPin 26

int playButtonState = 0;
int skipButtonState = 0;
int prevButtonState = 0;

void setup() {
  Serial.begin(115200);
  delay(500);

  mySerial.begin(115200, SERIAL_8N1, 16, 17);

  pinMode(playButtonPin, INPUT_PULLUP);
  pinMode(skipButtonPin, INPUT_PULLUP);
  pinMode(prevButtonPin, INPUT_PULLUP);

   if (!DFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer not detected!");
    while (true);
  }

  DFPlayer.loopFolder(01);
  DFPlayer.volume(5);
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
