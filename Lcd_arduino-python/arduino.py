import serial
import time

ser = serial.Serial('COM4', 9600)

def led_on_off():
    rot = input("\n nhap so : ")
    ser.write(rot.encode("utf-8"))
    led_on_off()

# time.sleep(1) 
led_on_off()