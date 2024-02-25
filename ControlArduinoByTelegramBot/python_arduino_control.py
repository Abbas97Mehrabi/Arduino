import serial
ser = serial.Serial('/dev/ttyUSB0',9600) 


while True:
      input_user = input("Press Y to turn on the LED \nPress N to turn off the LED \n")
      if(input_user == 'Y'):
            ser.write(b'Y')
      
      if(input_user == 'N'):
            ser.write(b'N')
