#include <wiringPi.h>
#include <stdio.h>

#define LedPin 0
#define BtnPin 1

int main(void)
{
    if(wiringPiSetup() == -1) {
        printf("setup wiringPi failed!");
	return 1;
    }

    pinMode(LedPin, OUTPUT);
    pinMode(BtnPin, INPUT);

    // pull up to 3.3V, make GPIO1 a stable level
	pullUpDnControl(BtnPin, PUD_UP);
	
    while(1) {
		digitalWrite(LedPin, HIGH);
		
		
		if(digitalRead(BtnPin) == 0) { // check if btn pressed
			digitalWrite(LedPin, LOW); // turn on led
			printf("Button down, led on\n");
		} 
		else {
			printf("Button up, led off\n");
		}
    }
    
    return 0;
}
