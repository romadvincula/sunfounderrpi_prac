#!/usr/bin/env python
import RPi.GPIO as GPIO
import time

LedPin = 11 #pin11
delay=0.017
delay=0.017

GPIO.setmode(GPIO.BOARD) # numbers gpios by physical locations
GPIO.setup(LedPin, GPIO.OUT) # set to output mode
GPIO.output(LedPin, GPIO.HIGH) # initially set as high to turn off led

try:
	while True:
		print("... led on")
		GPIO.output(LedPin, GPIO.LOW) # turn on led
		time.sleep(delay)
		
		print("... led off")
		GPIO.output(LedPin, GPIO.HIGH) # turn off led
		time.sleep(delay)
except KeyboardInterrupt: # when ctrl+c is pressed then...
	GPIO.output(LedPin, GPIO.HIGH) # turn led off
	GPIO.cleanup() # release resources
