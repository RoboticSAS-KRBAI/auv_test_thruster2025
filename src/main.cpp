#include <Arduino.h>
#include <Servo.h>

// Definisikan variable pin thruster
byte servoPin1 = 1;
byte servoPin2 = 2;
byte servoPin3 = 3;
byte servoPin4 = 4;
byte servoPin5 = 5;
byte servoPin6 = 6;
byte servoPin7 = 7;
byte servoPin8 = 8;
byte servoPin9 = 9;
byte servoPin10 = 10;

// Definisikan servo thruster
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;

// inisialisasi variable
// 0 => 1500
// + => > 1500
// - => < 1500
int maju = 1600;
int mundur = 1400;
int stop = 1500;
int durasi = 200;

void setup() {



  Serial.begin(9600);

  // Relasikan pin dengan servo -nya
  servo1.attach(servoPin1);
  servo1.writeMicroseconds(stop);  // Mengirim sinyal "stop" ke thruster 1.

  servo2.attach(servoPin2);
  servo2.writeMicroseconds(stop);  // Mengirim sinyal "stop" ke thruster 2.

  servo3.attach(servoPin3);
  servo3.writeMicroseconds(stop);  // Mengirim sinyal "stop" ke thruster 3.

  servo4.attach(servoPin4);
  servo4.writeMicroseconds(stop);

  servo5.attach(servoPin5);
  servo5.writeMicroseconds(stop);

  servo6.attach(servoPin6);
  servo6.writeMicroseconds(stop);

  servo7.attach(servoPin7);
  servo7.writeMicroseconds(stop);

  servo8.attach(servoPin8);
  servo8.writeMicroseconds(stop);

  servo9.attach(servoPin9);
  servo9.writeMicroseconds(stop);

  servo10.attach(servoPin10);
  servo10.writeMicroseconds(stop);

  delay(3000);  // Jeda untuk memungkinkan ESC mengenali sinyal berhenti
  Serial.println("1. Maju");
  Serial.println("2. Mundur");
  Serial.println("3. Berhenti");
}

void thr1() {
  Serial.println("THR 1");
  int signal1 = maju;
  servo1.writeMicroseconds(signal1);
}

void thr2() {
  Serial.println("THR 2");
  int signal2 = maju;
  servo2.writeMicroseconds(signal2);
}

void thr3() {
  Serial.println("THR 3");
  int signal3 = maju;
  servo3.writeMicroseconds(signal3);
}

void thr4() {
  Serial.println("THR 4");
  int signal4 = maju;
  servo4.writeMicroseconds(signal4);
}

void thr5() {
  Serial.println("THR 5");
  int signal5 = maju;
  servo5.writeMicroseconds(signal5);
}

void thr6() {
  Serial.println("THR 6");
  int signal6 = maju;
  servo6.writeMicroseconds(signal6);
}

void thr7() {
  Serial.println("THR 7");
  int signal7 = maju;
  servo7.writeMicroseconds(signal7);
}

void thr8() {
  Serial.println("THR 8");
  int signal8 = maju;
  servo8.writeMicroseconds(signal8);
}

void thr9() {
  Serial.println("THR 9");
  int signal9 = maju;
  servo9.writeMicroseconds(signal9);
}

void thr10() {
  Serial.println("THR 10");
  int signal10 = maju;
  servo10.writeMicroseconds(signal10);
}

void depan() {

  Serial.println("Maju");
  int signal1 = maju;  // Set sinyal untuk thruster 1 antara 1100 dan 1900
  int signal2 = maju;  // Set sinyal untuk thruster 2 antara 1100 dan 1900
  int signal3 = maju;  // Set sinyal untuk thruster 3 antara 1100 dan 1900
  int signal4 = maju;
  int signal5 = stop;
  int signal6 = stop;
  int signal7 = stop;
  int signal8 = stop;
  int signal9 = maju;
  int signal10 = maju;
  servo1.writeMicroseconds(signal1);
  servo2.writeMicroseconds(signal2);
  servo3.writeMicroseconds(signal3);
  servo4.writeMicroseconds(signal4);
  servo5.writeMicroseconds(signal5);
  servo6.writeMicroseconds(signal6);
  servo7.writeMicroseconds(signal7);
  servo8.writeMicroseconds(signal8);
  servo9.writeMicroseconds(signal9);
  servo10.writeMicroseconds(signal10);
  // delay(3000);
  // berhenti();
}

void belakang() {
  Serial.println("Mundur");
  int signal1 = mundur;  // Set sinyal untuk thruster 1 antara 1100 dan 1900
  int signal2 = mundur;  // Set sinyal untuk thruster 2 antara 1100 dan 1900
  int signal3 = mundur;  // Set sinyal untuk thruster 3 antara 1100 dan 1900
  int signal4 = mundur;
  int signal5 = stop;
  int signal6 = stop;
  int signal7 = stop;
  int signal8 = stop;
  servo1.writeMicroseconds(signal1);
  servo2.writeMicroseconds(signal2);
  servo3.writeMicroseconds(signal3);
  servo4.writeMicroseconds(signal4);
  servo5.writeMicroseconds(signal5);
  servo6.writeMicroseconds(signal6);
  servo7.writeMicroseconds(signal7);
  servo8.writeMicroseconds(signal8);
}


void atas() {
  Serial.println("Mundur");
  int signal1 = stop;  // Set sinyal untuk thruster 1 antara 1100 dan 1900
  int signal2 = stop;  // Set sinyal untuk thruster 2 antara 1100 dan 1900
  int signal3 = stop;  // Set sinyal untuk thruster 3 antara 1100 dan 1900
  int signal4 = stop;
  int signal5 = maju;
  int signal6 = maju;
  int signal7 = maju;
  int signal8 = maju;
  servo1.writeMicroseconds(signal1);
  servo2.writeMicroseconds(signal2);
  servo3.writeMicroseconds(signal3);
  servo4.writeMicroseconds(signal4);
  servo5.writeMicroseconds(signal5);
  servo6.writeMicroseconds(signal6);
  servo7.writeMicroseconds(signal7);
  servo8.writeMicroseconds(signal8);
}

void berhenti() {
  Serial.println("Berhenti");
  int signal1 = stop;  // Set sinyal untuk thruster 1 antara 1100 dan 1900
  int signal2 = stop;  // Set sinyal untuk thruster 2 antara 1100 dan 1900
  int signal3 = stop;  // Set sinyal untuk thruster 3 antara 1100 dan 1900
  int signal4 = stop;
  int signal5 = stop;
  int signal6 = stop;
  int signal7 = stop;
  int signal8 = stop;
  int signal9 = stop;
  int signal10 = stop;
  servo1.writeMicroseconds(signal1);
  servo2.writeMicroseconds(signal2);
  servo3.writeMicroseconds(signal3);
  servo4.writeMicroseconds(signal4);
  servo5.writeMicroseconds(signal5);
  servo6.writeMicroseconds(signal6);
  servo7.writeMicroseconds(signal7);
  servo8.writeMicroseconds(signal8);
  servo9.writeMicroseconds(signal9);
  servo10.writeMicroseconds(signal10);
}

void loop() {

  int input = Serial.parseInt();

  // while (Serial.available() == 0){
  // }

  if (input == 1) {
    thr1();
    delay(200);
    // Serial.print("Maju");
  } else if (input == 2) {
    thr2();
    delay(200);
    // Serial.print("Mundur");
  } else if (input == 3) {
    thr3();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 4) {
    thr4();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 5) {
    thr5();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 6) {
    thr6();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 7) {
    thr7();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 8) {
    thr8();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 9) {
    thr9();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 10) {
    thr10();
    delay(200);
    // Serial.print("Berhenti");
  } else if (input == 11) {
    depan();
    delay(200);  
  }else {
    berhenti();
  }
}



