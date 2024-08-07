unsigned long prevPrint = millis();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  unsigned long currTime = millis();


  //instead of delay stoping the whole program here is a solution using the measuring of time to not have to stop the code entirely
  //this allows you to do multiple things at the same time
  if(currTime-prevPrint > 1000){
    Serial.println("Hello");
    prevPrint += 500;
  }
}
