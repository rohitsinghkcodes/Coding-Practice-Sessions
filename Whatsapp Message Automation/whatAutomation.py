import pywhatkit
def inputFunc():
    ContactTo = input('Enter the whatsapp no to whome you want to send the message: ')
    message = input("Enter Yout message: ")
    timeHour = int(input("Enter time of sending the message(hours): "))
    timeMin = int(input("Enter time of sending the message(mins): "))

    return ContactTo,message,timeHour,timeMin

 
def sendAutomated(ContactTo,message,timeHour,timeMin):
    pywhatkit.sendwhatmsg(ContactTo,message,timeHour,timeMin,wait_time=10,print_waitTime=True)

if __name__ == "__main__":
    ContactTo,message,timeHour,timeMin = inputFunc()
    sendAutomated(ContactTo,message,timeHour,timeMin)
    