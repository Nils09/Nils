#################################################################################################
#Write a program which accept number from user and print that number of “*” on screen.
#Input : 5 Output : * * * * *
###########################################################################################

def Display(value):
    for i in range(value):
        print("*",end=" ")

def main():
    no=int(input("Enter the no : "))
    Display(no)

if __name__ == "__main__":
    main()