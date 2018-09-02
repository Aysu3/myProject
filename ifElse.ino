const int kPinLed=6;

void setup() {
  pinMode(kPinLed, OUTPUT);

}
int delayTime=100;
void loop() {

  if(delayTime<1000){
    delayTime++;
   
    }

    else{
  delayTime--;
      }
   
 digitalWrite(kPinLed, HIGH );
   delay(delayTime);
   digitalWrite(kPinLed, LOW);
   delay(delayTime);
}
