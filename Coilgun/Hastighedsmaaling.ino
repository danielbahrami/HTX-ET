// "const int" er variabler der kun kan læse data
const int sensor1 = A1; // Den første photoresistor er forbundet til analog pin A1
const int sensor2 = A0; // Den anden photoresistor er forbundet til analog pin A0
const int led1 = 12; // Det første LED er forbundet til digital pin 12
const int led2 = 13; // Det anden LED er forbundet til digital pin 13

// "int" er variabler der både kan læse og skrive data
int sensorvaerdi1; // Gem dataen fra den første photoresistor som en variabel
int sensorvaerdi2; // Gem dataen fra den anden photoresistor som en variabel
int tidsmaaling = 0; // Variablen "tidsmåling" sættes til at være lig med 0

// "unsigned long" er udvidede størrelsesvariabler for nummeropbevaring og gemmer 32 bit (4 bytes). Unsigned longs gemmer ikke negative tal
unsigned long starttid; // Starttid er defineret som en variabel
unsigned long sluttid; // Sluttid er defineret som en variabel
unsigned long varighed; // Varighed er defineret som en variabel
unsigned long hastighed; // Hastighed er defineret som en variabel

void setup() {
pinMode(led1, OUTPUT); // Det første LED er sat til OUTPUT da den skal modtage data fra kredsløbet
pinMode(sensor1, INPUT); // Den første photoresistor er sat til INPUT da den skal give data til kredsløbet
pinMode(led2, OUTPUT); // Det andet LED er sat til OUTPUT da den skal modtage data fra kredsløbet
pinMode(sensor2, INPUT); // Den anden photoresistor er sat til INPUT da den skal give data til kredsløbet
varighed = sluttid - starttid / 1000; // Varighed defineres som sluttiden substrakteret med starttiden divideret med 1000 for at få tiden i sekunder
hastighed = 0.06 / varighed; // Hastigheden defineres som afstanden mellem de to photoresistore (6 cm.) divideret med varigheden.
Serial.begin(9600); // Indstiller datahastigheden i bit per sekund (baud) til Serial Monitor
}

void loop() {
sensorvaerdi1 = analogRead(sensor1); // Den analoge data fra den første photoresistor læses
sensorvaerdi2 = analogRead(sensor2); // Den analoge data fra den anden photoresistor læses

if (sensorvaerdi1 < 850) {
digitalWrite(led1, LOW); // Hvis værdien fra den første photoresister er mindre end 850 skal den første LED slukke
}

if (tidsmaaling == 0 && digitalRead(led1) == LOW) {
tidsmaaling = 1; // Hvis tidsmåling værdien er lig med 0 (standard) og den første LED er slukket starter tidsmålingen. Værdien bliver sat lig med 1
}

if (tidsmaaling = 1) {
starttid = millis(); // Hvis tidsmåling værdien er lig med 1 starter tidsmålingen i millisekunder
}

else {
digitalWrite(led1, HIGH); // Hvis værdien fra den første photoresistor er over 850 skal den første LED lyse konstant
}


if (sensorvaerdi2 < 850) {
digitalWrite(led2, LOW); // Hvis værdien fra den anden photoresister er mindre end 850 skal den anden LED slukke
}

if (tidsmaaling == 1 && digitalRead(led2) == LOW) {
sluttid = millis(); // Hvis tidsmålingen er startet og den anden LED slukker stopper tidsmålingen
Serial.print ("Hastighed i m/s: ");
Serial.println (hastighed); // Den udregnede hastighed i m/s printes ud fra teksten "Hastighed i m/s:" i Serial Monitor
tidsmaaling = 0; // Hvis tidsmålingen stopper bliver tidsmålingen værdien igen sat lig med = 0
}

else {
digitalWrite(led2, HIGH); // Hvis værdien fra den anden photoresistor er over 850 skal den anden LED lyse konstant
}

}
