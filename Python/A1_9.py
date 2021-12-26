######################################################################
#Write a program which display first 10 even numbers on screen.
#Output : 2 4 6 8 10 12 14 16 18 20
######################################################################

def main():
    cnt=1
    no=2
    while(cnt<=10):
        if(no%2==0):
            print(no,end=" ")
            cnt=cnt+1
        no=no+1
Write a program which accept name from user and display length of its name.
Input : Marvellous Output : 10