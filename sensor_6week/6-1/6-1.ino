int pin = 2;    // 7-세그먼트의 LED 요소 a를 아두이노의 디지털 2번 핀과 연결
void setup() {
    for (int i = 2; i <= 9; i++) { 
        pinMode(i, OUTPUT);
    
    digitalWrite(2, HIGH);    // 시작과 동시에 LED 요소 a에 불이 켜짐
}
}
void loop() {
    for(int i = 0 ; i < 8 ; i++) {
        for(int j = 0 ; j < 8 ; j++) { 
if (i == j) digitalWrite(pin+j, HIGH);     // 한 개의 LED에 불을 켜고
else digitalWrite(pin+j, LOW);            // 나머지 LED의 불은 끈다.
}
delay(1000); // 1초 지연
}
}

