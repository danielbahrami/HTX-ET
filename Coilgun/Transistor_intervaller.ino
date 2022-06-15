// "const int" er variabler der kun kan læse data
const int knap1 = 2; // Den første knap er forbundet til digital pin 2
const int knap2 = 3; // Den anden knap er forbundet til digital pin 3
const int knap3 = 4; // Den tredje knap er forbundet til digital pin 4
const int knap4 = 5; // Den fjerde knap er forbundet til digital pin 5
const int transistor = 6; // Transistoren er forbundet til digital pin 6

// "int" er variabler der både kan læse og skrive data
int knapstadie1 = 0; // Variablen "knapstadie1" sættes til at være lig med 0
int knapstadie2 = 0; // Variablen "knapstadie2" sættes til at være lig med 0
int knapstadie3 = 0; // Variablen "knapstadie3" sættes til at være lig med 0
int knapstadie4 = 0; // Variablen "knapstadie4" sættes til at være lig med 0

void setup() {
pinMode(knap1, INPUT); // Den første knap er sat til INPUT da den skal give data til kredsløbet
pinMode(knap2, INPUT); // Den anden knap er sat til INPUT da den skal give data til kredsløbet
pinMode(knap3, INPUT); // Den tredje knap er sat til INPUT da den skal give data til kredsløbet
pinMode(knap4, INPUT); // Den fjerde knap er sat til INPUT da den skal give data til kredsløbet
pinMode(transistor, OUTPUT); // Transistoren er sat til OUTPUT da den skal modtage data fra kredsløbet
}

void loop() {
knapstadie1 = digitalRead(knap1); // Den digitale data fra den første knap læses
knapstadie2 = digitalRead(knap2); // Den digitale data fra den anden knap læses
knapstadie3 = digitalRead(knap3); // Den digitale data fra den tredje knap læses
knapstadie4 = digitalRead(knap4); // Den digitale data fra den første knap læses

// Hvis der trykkes på den første knap giver transistoren efter 1 sekund strøm til spolen i 8 millisekunder
if (knapstadie1 ==  HIGH) {
delay(1000);
digitalWrite(transistor, HIGH);
delay(8);
digitalWrite(transistor, LOW);
}

// Hvis der trykkes på den første knap giver transistoren efter 1 sekund strøm til spolen i 10 millisekunder
if (knapstadie2 == HIGH) {
delay(1000);
digitalWrite(transistor, HIGH);
delay(10);
digitalWrite(transistor, LOW);
}

// Hvis der trykkes på den første knap giver transistoren efter 1 sekund strøm til spolen i 12 millisekunder
if (knapstadie3 == HIGH) {
delay(1000);
digitalWrite(transistor, HIGH);
delay(12);
digitalWrite(transistor, LOW);
} 

// Hvis der trykkes på den første knap giver transistoren efter 1 sekund strøm til spolen i 15 millisekunder
if (knapstadie4 == HIGH) {
delay(1000);
digitalWrite(transistor, HIGH);
delay(15);
digitalWrite(transistor, LOW);
}

}
