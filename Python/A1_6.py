#####################################################################################################
#Write a program which accept number from user and check whether that number is positive or
#negative or zero.
#Input : 11 Output : Positive Number
#Input : -8 Output : Negative Number
#Input : 0 Output : Zero
#####################################################################################################

def Display(value):
    if(value>0):
        print("Number is positive")
    elif(value<0):
        print("Number is Negative")
    else:
        print("Number is zero")

def main():
    no=int(input("Enter the no"))

    Display(no)

if __name__ == "__main__" :
    main()
