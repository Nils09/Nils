################################################################################################
#Write a program which accept one number for user and check whether number is prime or not.
#Input : 5 Output : It is Prime Number
################################################################################################
def ChkPrime(value):
    cnt=2
    while(cnt<value):
        if(value%cnt==0):
            return True
        else:
            return False


def main():
    no=int(input("Enter the no : "))

    ret=ChkPrime(no)
    if(ret==False):
        print("It is Prime Number")
    else:
        print("It is NOT Prime Number")

if __name__=="__main__":
    main()