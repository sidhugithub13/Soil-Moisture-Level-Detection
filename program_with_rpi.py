//soil moisture sensor with raspberry pi 
import RP1.GPIO as GPIO 
import time 
#GPIO SETUP 
channel = 21 
GPIO.setmode (GPIO.BCM) 
GPIO.setup (channel, GPIO.IN) 
def callback (channel): 
    if GPIO. input (channel): 
        print("no moisture content") 
    else: 
        value = GPIO.Read(channel) 
        print("Moisture observed!!!") 
        print(" Moisture Value :", value) 
        if(value > 700): 
            print(" Too much water") 
        else: 
            print(" I feel comfortable") 
        GPIO.add_event_detect (channel, GPIO.BOTH, bounceti-300) let u 
GPIO.add_event_callback (channel, callback) assign function to 
#infinite loop 
while True: 
    time.sleep(1) 
