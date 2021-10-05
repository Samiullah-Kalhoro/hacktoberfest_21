global count
global shared
count = 0
shared = []
class Reader:
    def __init__(self,number):
        self.number = number
        self.type = "Reader"
    def __repr__(self):
        return str(f"Reader {self.number}")
    def __str__(self):
        return str(f"Reader {self.number}")

class Writer:
    def __init__(self,number):
        self.number = number
        self.type = "Writer"
    def __repr__(self):
        return str(f"Writer {self.number}")
    def __str__(self):
        return str(f"Writer {self.number}")

while(1):
    ch=int(input("\n--MENU--\n1.Read\n2.Write\n3.Remove\n4.Exit\n"))
    if(ch == 1):
        if(len(shared)==0 or shared[0].type=="Reader"):
            count +=1
            shared.append(Reader(count))
        else:
            print("Please wait for writer to finish writing\n")
    elif(ch == 2):
        if(len(shared)==0):
            count = 1
            shared.append(Writer(count))
        else:
            print("Shared location is being used by another Reader/Writer\n")  
    elif(ch==3):
        del shared[0]
    elif(ch==4):
        break
    else:
        print("Invalid command\n")
    for i in shared:
            print(i,end=", ")
    print()    
