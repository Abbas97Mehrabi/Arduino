import telepot, time
import serial
ser = serial.Serial('/dev/ttyUSB0',9600) 

def telebotard(msg):
      userName = msg['from']['first_name']+" "+msg['from']['last_name']

      content_type, chat_type, chat_id = telepot.glance(msg)

      if(content_type == 'text'):
            command = msg['text']
            print('Got Command: %s' %command)

            if 'Hello' in command:
                   bot.sendMessage(chat_id, "Hello, this is telebot for Arduino UNO how can i help you?")
            if 'Help' in command:
                   bot.sendMessage(chat_id, "Hello %s, how can i help you?" %userName)
            if 'led on' in command:
                  ser.write(b'Y')
            if 'led off' in command:
                  ser.write(b'N')

bot = telepot.Bot('6876647189:AAExFxdIRJXEMDOsED6dWq_CwBtIul1oXCY')

bot.message_loop(telebotard)

while 1:
       time.sleep(20)
