#############################################################################################
#Write a program which accept one number form user and return addition of its factors.
#Input : 12 Output : 16 (1+2+3+4+6)
#############################################################################################
def Factors(value):
    cnt=1
    sum=0
    while(cnt<value):
        if(value%cnt==0):
            sum=sum+cnt
        cnt=cnt+1
    return sum

def main():
    no=int(input("Enter the no : "))

    ret=Factors(no)
    print("Sum of Factors is : ",ret)

if __name__ == "__main__":
    main()