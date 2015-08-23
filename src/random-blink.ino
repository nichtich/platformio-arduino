#ifndef LED_PIN
#define LED_PIN 13
#endif

void setup() 
{
    pinMode(LED_PIN, OUTPUT);     // set pin as output
}

void loop()
{
    long num = random(1,5);
    for(int i=0; i<num; i++) {
        digitalWrite(LED_PIN, HIGH);  // set the LED on
        delay(100);                   // wait for tenth of a second
        digitalWrite(LED_PIN, LOW);   // set the LED off
        delay(100);                   // wait
    }

    digitalWrite(LED_PIN, LOW);   // set the LED off
    delay(1000);                  // wait for a second
}
