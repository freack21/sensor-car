const int IN1 = 1;
const int IN2 = 2;
const int IN3 = 3;
const int IN4 = 4;
const int pinSensorA1 = A0;
const int pinSensorD1 = 8;
int sensorValueA1 = 0;
int sensorValueD1 = 0;
const int pinSensorA2 = A1;
const int pinSensorD2 = 9;
int sensorValueA2 = 0;
int sensorValueD2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(pinSensorA1, INPUT);
  pinMode(pinSensorD1, INPUT);
  pinMode(pinSensorA2, INPUT);
  pinMode(pinSensorD2, INPUT);
}

void loop() {
  sensorValueD1 = digitalRead(pinSensorD1);
  sensorValueD2 = digitalRead(pinSensorD2);

  if(sensorValueD1 == 1 && sensorValueD2 == 1) {
    maju();
  } else if(sensorValueD1 == 1 && sensorValueD2 == 0) {
    kiri();
  } else if(sensorValueD1 == 0 && sensorValueD2 == 1) {
    kanan();
  } else {
    putar();
  }

  // if(sensorValueD1 == 0 && sensorValueD2 == 0) {
  //   maju();
  // } else if(sensorValueD1 == 0 && sensorValueD2 == 1) {
  //   kiri();
  // } else if(sensorValueD1 == 1 && sensorValueD2 == 0) {
  //   kanan();
  // } else {
  //   putar();
  // }

  // sensorValueA1 = analogRead(pinSensorA1);
  // sensorValueA2 = analogRead(pinSensorA2);

  // Serial.print("Analog Reading1=");
  // Serial.print(sensorValueA1);
  // Serial.print("\t Digital Reading1=");
  // Serial.println(sensorValueD1);

  // Serial.print("Analog Reading2=");
  // Serial.print(sensorValueA2);
  // Serial.print("\t Digital Reading2=");
  // Serial.println(sensorValueD2);

  // if(sensorValueD1 == 0 && sensorValueD2 == 0 || sensorValueD1 == 1 && sensorValueD2 == 1) {
  //   if(sensorValueA1 <= 50 && sensorValueA2 <= 50 || sensorValueA1 >= 800 && sensorValueA2 >= 800) {
  //     maju();
  //   }
  // } else if(sensorValueD1 == 1 && sensorValueD2 == 0) {
  //   if(sensorValueA1 >= 800)
  //     kanan();
  // } else if(sensorValueD2 == 1 && sensorValueD2 == 0) {
  //   if(sensorValueA1 >= 800)
  //     kanan();
  // } else {
  //   putar();
  // }

  // if(sensorValueA1 <= 50 && sensorValueA2 <= 50) {
  //   putar();
  // } else if(sensorValueA1 > 50 && sensorValueA2 <= 50) {
  //   kiri();
  // } else if(sensorValueA1 <= 50 && sensorValueA2 > 50) {
  //   kiri();
  // } else {
  //   maju();
  // }

  delay(30);
}
