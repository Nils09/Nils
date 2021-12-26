################################################################################
#Write a program which accept one number from user and return its factorial.
#Input : 5 Output : 120
################################################################################
def Factorial(value):
    cnt=1
    fact=1
    while(cnt<=value):
        fact=cnt*fact
        cnt=cnt+1
    return fact

def main():
    no=int(input("Enter the no : "))

    ret=Factorial(no)
    print("Factorial is : ",ret)

if __name__ == "__main__":
    main()