void setup() {
    Particle.subscribe("physical_computing_switch_status", switchStatus);
    Particle.subscribe("physical_computing_will", shreyaInit);
    Particle.publish("physical_computing_shreya", "device_init_status 0");
    pinMode(A0, INPUT);
    pinMode(D6, OUTPUT);
}

void loop() {
    Particle.publish("physical_computing_light_status", String(analogRead(A0)));
    if (analogRead(A0) > 2000) {
        Particle.publish("physical_computing_send_email", "email");
        delay(10000);
    }
    delay(3000);
}

void switchStatus(const char *event, const char *data) {
    Particle.publish("successfully received switch status!", data);
    Particle.publish("switch is on!");
    for (int i = 0; i < 3; i++) { // flash 3 times
        digitalWrite(D6,HIGH);
        delay(200);
        digitalWrite(D6, LOW);
        delay(100);
    }
}

void shreyaInit(const char *event, const char *data) {
    Particle.publish("shrey initted!");
    for (int i = 0; i < 5; i++) { // flash 5 times
        digitalWrite(D6,HIGH);
        delay(200);
        digitalWrite(D6, LOW);
        delay(100);
    }
}