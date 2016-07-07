void setup() {
  // put your setup code here, to run once:
  //Serial.begin(38400);
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  Joystick.useManualSend(true);

}

boolean up = false;
boolean down = false;
boolean left = false;
boolean right = false;
int b1 = 0;
int b2 = 0;
int b3 = 0;
int b4 = 0;
int b5 = 0;
int b6 = 0;
int b7 = 0;
int b8 = 0;
int b9 = 0;
int b10 = 0;
int b11 = 0;
int b12 = 0;



void loop() {
  // put your main code here, to run repeatedly:
  up = false;
  down = false;
  left = false;
  right = false;
  b1 = 0;
  b2 = 0;
  b3 = 0;
  b4 = 0;
  b5 = 0;
  b6 = 0;
  b7 = 0;
  b8 = 0;
  b9 = 0;
  b10 = 0;
  b11 = 0;
  b12 = 0;
  
  if (digitalRead(0) == LOW) {
    //Serial.println("Joystick Up?");
    up = true;
  }
  if (digitalRead(1) == LOW) {
    //Serial.println("Joystick Right?");
    right = true;
  }
  if (digitalRead(2) == LOW) {
    //Serial.println("Joystick Left?");
    left = true;
  }
  if (digitalRead(3) == LOW) {
    //Serial.println("Joystick Down?");
    down = true;
  }
  if (up) {
    if (left) {
      Joystick.hat(315);
    }else if (right) {
      Joystick.hat(45);
    }else {
      Joystick.hat(0);
    }
  }
  else if (down) {
    if (left) {
      Joystick.hat(225);
    }else if (right) {
      Joystick.hat(135);
    }else {
      Joystick.hat(180);
    }
  }
  else if (left) {
    Joystick.hat(270);
  }
  else if (right) {
    Joystick.hat(90);
  }
  else {
    Joystick.hat(-1);
  }

  if (digitalRead(4) == LOW) {
    b1 = 1;
  }
  if (digitalRead(5) == LOW) {
    b2 = 1;
  }
  if (digitalRead(6) == LOW) {
    b3 = 1;
  }
  if (digitalRead(7) == LOW) {
    b4 = 1;
  }
  if (digitalRead(8) == LOW) {
    b5 = 1;
  }
  if (digitalRead(9) == LOW) {
    b6 = 1;
  }
  //Rearranged the numbers to make up for me wiring the buttons up a little wrong.
  if (digitalRead(10) == LOW) {
    b12 = 1;  //white
  }
  if (digitalRead(11) == LOW) {
    b11 = 1; //black
  }
  if (digitalRead(12) == LOW) {
    b10 = 1; //blue
  }
  if (digitalRead(14) == LOW) {
    b9 = 1;  //green
  }
  if (digitalRead(15) == LOW) {
    b8 = 1; //yellow
  }
  if (digitalRead(16) == LOW) {
    b7 = 1; //red
  }
  Joystick.button(1, b1);
  Joystick.button(2, b2);
  Joystick.button(3, b3);
  Joystick.button(4, b4);
  Joystick.button(5, b5);
  Joystick.button(6, b6);
  Joystick.button(7, b7);
  Joystick.button(8, b8);
  Joystick.button(9, b9);
  Joystick.button(10, b10);
  Joystick.button(11, b11);
  Joystick.button(12, b12);
  Joystick.send_now();
  delay(5);
}
