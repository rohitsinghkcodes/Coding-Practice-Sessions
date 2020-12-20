import pywhatkit


def inputFunc():
    ContactTo = input('Enter the whatsapp no to whome you want to send the message: ')
    message = input("Enter Yout message: ")
    timeHour = int(input("Enter time of sending the message(hours): "))
    timeMin = int(input("Enter time of sending the message(mins): "))

    return ContactTo,message,timeHour,timeMin

#This for sending the message to a person
def sendPersonAutomated(ContactTo,message,timeHour,timeMin):
    pywhatkit.sendwhatmsg(ContactTo,message,timeHour,timeMin,wait_time=10,print_waitTime=True)


#This for info from wiki
def WikiInfo(topic):
    pywhatkit.info(topic,lines=2)


#This is for  converting any given image to ASCII art
def asciiConv(image,img):
    pywhatkit.image_to_ascii_art(image,f'{img}.txt')


#This is for  converting text to handwritten font with color combination 0,0,0 in RGB form
def handWrittenConv():
    pywhatkit.text_to_handwriting('Hello I am Rohit Kumar',rgb=[0,0,0])


if __name__ == "__main__":
    #ContactTo,message,timeHour,timeMin = inputFunc()
    #sendPersonAutomated(ContactTo,message,timeHour,timeMin)
    
    #WikiInfo('India')

    #asciiConv('guglani.png','guglani')

    handWrittenConv()