##################################################################################################
#Write a program which accept number from user and return addition of digits in that number.
#Input : 5187934 Output : 37
##################################################################################################

def AddDigit(value):
    sum=0
    temp=0
    while(value!=0):
        temp=value%10
        sum=sum+temp
        value=int(value/10)
    return sum

def main():
    no=int(input("Enter the number : "))
    ret=AddDigit(no)
    print("Addition of Digits is :",ret)

if __name__ == "__main__":
    main()