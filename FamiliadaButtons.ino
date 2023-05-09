int resetButtonPin = 0;
int aButtonPin = 1;
int bButtonPin = 2;
int workingLedPin = 10;
int LEDA = 1;
int LEDB = 2;
bool playing = true;

void setup() {
  // put your setup code here, to run once:
 pinMode(resetButtonPin, INPUT);
 pinMode(aButtonPin, INPUT);
 pinMode(bButtonPin, INPUT);
 pinMode(LEDA, OUTPUT);
 pinMode(LEDB, OUTPUT);
 pinMode(workingLedPin, OUTPUT);
 digitalWrite(workingLedPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalRead(aButtonPin);
digitalRead(bButtonPin);
digitalRead(resetButtonPin);
 
  if (playing){
    
    if (aButtonPin = HIGH){
       digitalWrite(LEDA, HIGH);
       playing = false;
    }
  
    if (aButtonPin = HIGH){
       digitalWrite(LEDB, HIGH);
       playing = false;
    } 
  }

  if (resetButtonPin = HIGH){
    digitalWrite(LEDA, LOW);
    digitalWrite(LEDB, LOW);
    playing = true;
  }
}
