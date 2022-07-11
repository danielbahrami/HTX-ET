const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int transistor = 6;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(button3, INPUT);
    pinMode(button4, INPUT);
    pinMode(transistor, OUTPUT);
}

void loop() {

    buttonState1 = digitalRead(button1);
    buttonState2 = digitalRead(button2);
    buttonState3 = digitalRead(button3);
    buttonState4 = digitalRead(button4);

    if (buttonState1 == HIGH) {
        delay(1000);
        digitalWrite(transistor, HIGH);
        delay(8);
        digitalWrite(transistor, LOW);
    }

    if (buttonState2 == HIGH) {
        delay(1000);
        digitalWrite(transistor, HIGH);
        delay(10);
        digitalWrite(transistor, LOW);
    }

    if (buttonState3 == HIGH) {
        delay(1000);
        digitalWrite(transistor, HIGH);
        delay(12);
        digitalWrite(transistor, LOW);
    }

    if (buttonState4 == HIGH) {
        delay(1000);
        digitalWrite(transistor, HIGH);
        delay(15);
        digitalWrite(transistor, LOW);
    }
}
