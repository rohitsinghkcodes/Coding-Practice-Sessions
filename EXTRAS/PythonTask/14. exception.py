class MyError(Exception): 
    def __init__(self, value): 
        self.value = value 
    def __str__(self): 
        return(repr(self.value)) 


def chkStr(numStr):
    for i in numStr:
        if int(i)==1:
            #raise exception1
            try: 
                raise(MyError(i)) 
            except MyError as error: 
                print('Exception for ',error.value) 

        elif int(i)==2:
            #raise exception2
            try: 
                raise(MyError(i)) 
            except MyError as error: 
                print('Exception for ',error.value) 
        
        elif int(i)==3:
            #raise exception 3
            try: 
                raise(MyError(i)) 
            except MyError as error: 
                print('Exception for ',error.value) 

        else:
            #termination
            exit()

if __name__ == "__main__":
    str = input('Enter the numeric string: ')
    chkStr(str)