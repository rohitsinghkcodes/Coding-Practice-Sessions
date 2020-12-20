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


if __name__ == "__main__":
    #ContactTo,message,timeHour,timeMin = inputFunc()
    #sendPersonAutomated(ContactTo,message,timeHour,timeMin)
    WikiInfo('India')
    