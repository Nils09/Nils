##############################################################################################
#Write a program which accept number from user and return number of digits in that number.
#Input : 5187934 Output : 7
################################################################################################

def Count(value):
    cnt=0
    while(value!=0):
        value=int(value/10)
        cnt=cnt+1
    return cnt

def main():
    no=int(input("Enter the number : "))
    ret=Count(no)
    print("No of Digits is :",ret)

if __name__ == "__main__":
    main()