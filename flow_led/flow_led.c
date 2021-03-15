#include <wiringPi.h>
#include <stdio.h>

#define LedPin0 0
#define LedPin1 1
#define LedPin2 2
#define LedPin3 3
#define LedPin4 4
#define LedPin5 5
#define LedPin6 6
#define LedPin7 7
#define Delay 50

int main(void)
{
    if(wiringPiSetup() == -1) {
        printf("setup wiringPi failed!");
	return 1;
    }

    pinMode(LedPin0, OUTPUT);
    pinMode(LedPin1, OUTPUT);
    pinMode(LedPin2, OUTPUT);
    pinMode(LedPin3, OUTPUT);
    pinMode(LedPin4, OUTPUT);
    pinMode(LedPin5, OUTPUT);
    pinMode(LedPin6, OUTPUT);
    pinMode(LedPin7, OUTPUT);

    while(1) {
	digitalWrite(LedPin0, LOW); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, HIGH);
	digitalWrite(LedPin3, HIGH); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);
	
	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, LOW);
	digitalWrite(LedPin2, HIGH);
	digitalWrite(LedPin3, HIGH); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);
	
	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, LOW);
	digitalWrite(LedPin3, HIGH); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);

	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, HIGH);
	digitalWrite(LedPin3, LOW); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);

	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, HIGH);
	digitalWrite(LedPin3, HIGH); 
	digitalWrite(LedPin4, LOW);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);

	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, HIGH);
	digitalWrite(LedPin3, HIGH); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, LOW); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);

	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, HIGH);
	digitalWrite(LedPin3, HIGH); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, LOW); 
	digitalWrite(LedPin7, HIGH);
	delay(Delay);

	digitalWrite(LedPin0, HIGH); 
	digitalWrite(LedPin1, HIGH);
	digitalWrite(LedPin2, HIGH); 
	digitalWrite(LedPin4, HIGH);
	digitalWrite(LedPin5, HIGH); 
	digitalWrite(LedPin6, HIGH); 
	digitalWrite(LedPin7, LOW);
	delay(Delay);

    }
    return 0;
}
