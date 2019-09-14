/*//sudo chmod a+rw /dev/ttyACM0
int LED = 3;
int globalDelay = 2000;
void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(globalDelay);
    digitalWrite(LED, LOW);
    delay(globalDelay);
}
*/