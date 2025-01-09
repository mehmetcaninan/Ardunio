int ledPins[]={3,5,6,9,10,11};
int ledSayisi=6;
int gecikme=1000;
int i=0;

void setup() {
  for(int i=0;i<ledSayisi;i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  
    analogWrite(ledPins[(i)%ledSayisi], 255);
        delay(gecikme);
    analogWrite(ledPins[(i+1)%ledSayisi], 125);
        delay(gecikme);
    analogWrite(ledPins[(i+2)%ledSayisi], 62);
        delay(gecikme);
    analogWrite(ledPins[(i+3)%6], 30);
        delay(gecikme);
	analogWrite(ledPins[(i)%ledSayisi], 0);
        delay(gecikme);
    i++;
  
  }