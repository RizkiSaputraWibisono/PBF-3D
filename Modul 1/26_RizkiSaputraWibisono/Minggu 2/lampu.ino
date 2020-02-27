#define LED1 16
#define LED2 5
#define LED3 4
#define LED4 0
#define LED5 2
#define delaysec 400

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  booting();
}

void loop() {
  put your main code here, to run repeatedly:
  animasi_LED1();
  animation_delay()
  animasi_LED2();
  animation_delay()
  animasi_LED3();
  animation_delay()
  animasi_LED4();
  animation_delay()
  animasi_LED5();
  animation_delay()
  animasi_LED6();
  animation_delay()
  animasi_LED7();
//ambulan();
}

void booting(){
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    delay(2500);
}

void ambulan(){
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, LOW);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, LOW);
    delay(100);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    delay(100);
}

void animation_delay(){
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    delay(500);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    delay(1000);
    Serial.println("LED Hidup Semua");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    delay(500);
}

void animasi_LED1() // 12345
{
  //LED 1 Hidup, lainnya mati
  Serial.println("LED 1 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 2 Hidup, lainnya mati
  Serial.println("LED 2 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 3 Hidup, lainnya mati
  Serial.println("LED 3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 4 hidup, lainnya mati
  Serial.println("LED 4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 5 hidup, lainnya mati
  Serial.println("LED 5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(delaysec);
}

void animasi_LED2() // 54321
{

  //LED 5 hidup, lainnya mati
  Serial.println("LED 5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(delaysec);

  //LED 4 hidup, lainnya mati
  Serial.println("LED 4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 3 Hidup, lainnya mati
  Serial.println("LED 3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 2 Hidup, lainnya mati
  Serial.println("LED 2 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 1 Hidup, lainnya mati
  Serial.println("LED 1 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);
}

void animasi_LED3() // 32415
{

  //LED 3 Hidup, lainnya mati
  Serial.println("LED 3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 2 Hidup, lainnya mati
  Serial.println("LED 2 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 4 hidup, lainnya mati
  Serial.println("LED 4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);
  
  //LED 1 Hidup, lainnya mati
  Serial.println("LED 1 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 5 hidup, lainnya mati
  Serial.println("LED 5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(delaysec);
}

void animasi_LED4() // 15243
{
  //LED 1 Hidup, lainnya mati
  Serial.println("LED 1 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 5 hidup, lainnya mati
  Serial.println("LED 5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(delaysec);

  //LED 2 Hidup, lainnya mati
  Serial.println("LED 2 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 4 hidup, lainnya mati
  Serial.println("LED 4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 3 Hidup, lainnya mati
  Serial.println("LED 3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);
}

void animasi_LED5() // 12 23 34 45
{
  //LED 1,2 Hidup, lainnya mati
  Serial.println("LED 1,2 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 2,3 hidup, lainnya mati
  Serial.println("LED 2,3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 3,4 Hidup, lainnya mati
  Serial.println("LED 3,4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 4,5 hidup, lainnya mati
  Serial.println("LED 4,5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  delay(delaysec);
}

void animasi_LED6() // 45 34 23 12
{

  //LED 4,5 hidup, lainnya mati
  Serial.println("LED 4,5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  delay(delaysec);

  //LED 3,4 Hidup, lainnya mati
  Serial.println("LED 3,4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 2,3 hidup, lainnya mati
  Serial.println("LED 2,3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 1,2 Hidup, lainnya mati
  Serial.println("LED 1,2 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);
}

void animasi_LED7() // 12 45 23 34 3
{

  //LED 1,2 Hidup, lainnya mati
  Serial.println("LED 1,2 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 4,5 hidup, lainnya mati
  Serial.println("LED 4,5 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  delay(delaysec);

  //LED 2,3 hidup, lainnya mati
  Serial.println("LED 2,3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 3,4 Hidup, lainnya mati
  Serial.println("LED 3,4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);

  //LED 3 Hidup, lainnya mati
  Serial.println("LED 3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);
}

void animasi_LED_var1()
{
  Serial.println("LED 3 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(delaysec);
  
  Serial.println("LED 2,4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);
  
  Serial.println("LED 1,5 Hidup, Lainnya Mati");
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(delaysec);
  
  Serial.println("LED 2,4 Hidup, Lainnya Mati");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  delay(delaysec);
  
}