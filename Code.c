#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String textMessage;

String redledState = "LOW";
String blueledstate = "LOW";
String greenledstate = "LOW";

// LEDS connected to pin 10, 11, 12
const int blueled = 10;
const int greenled = 11;
const int redled = 12;

int S1 = 1, S2 = 1, S3 = 1;

void setup() {
  lcd.begin();
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("GSM Based Home");
  lcd.setCursor(0, 1);
  lcd.print(" Automaton");
  delay(2000);
  // By default the LEDs are on
  digitalWrite(redled, HIGH);
  digitalWrite(blueled, HIGH);
  Serial.begin(19200);
  // Give time to your GSM shield to log on to the network
  delay(20000);
  // AT command to set SIM900 to SMS mode
  Serial.print("AT+CMGF=1\r");
  delay(100);
  // Set module to send SMS data to serial out upon receipt
  Serial.print("AT+CMMI-2,2,0,0,0\r");
  delay(100);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("RED BLUE GREEN");
}

void loop() {
  if (Serial.available() > 0) {
    textMessage = Serial.readString();
    textMessage.toUpperCase();
    delay(10);
  }

  if (textMessage.indexOf("REDON") >= 0) {
    S1 = 1;
    // Turn on red LED and save current state
    digitalWrite(redled, HIGH);
    redledState = "on";
    textMessage = "";
  } else if (textMessage.indexOf("REDOFF") >= 0) {
    S1 = 0;
    // Turn off red LED and save current state
    digitalWrite(redled, LOW);
    redledState = "off";
    textMessage = "";
  }

  if (textMessage.indexOf("BLUEON") >= 0) {
    S2 = 1;
    // Turn on blue LED and save current state
    digitalWrite(blueled, HIGH);
    blueledstate = "on";
    textMessage = "";
  } else if (textMessage.indexOf("BLUEOFF") >= 0) {
    S2 = 0;
    // Turn off blue LED and save current state
    digitalWrite(blueled, LOW);
    blueledstate = "off";
    textMessage = "";
  }

  if (textMessage.indexOf("GREENON") >= 0) {
    S3 = 1;
    // Turn on green LED and save current state
    digitalWrite(greenled, HIGH);
    greenledstate = "on";
    textMessage = "";
  } else if (textMessage.indexOf("GREENOFF") >= 0) {
    S3 = 0;
    // Turn off green LED and save current state
    digitalWrite(greenled, LOW);
    greenledstate = "off";
    textMessage = "";
  }

  lcd.setCursor(3, 1);
  lcd.print(S1 == 1 ? "ON" : "OFF");

  lcd.setCursor(8, 1);
  lcd.print(S2 == 1 ? "ON" : "OFF");

  lcd.setCursor(13, 1);
  lcd.print(S3 == 1 ? "ON" : "OFF");
}
