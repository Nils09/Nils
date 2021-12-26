################################################################################
#Write a program which accept one number and display below pattern.
#Input : 5
#Output : * * * * *
#         * * * * *
#         * * * * *
#         * * * * *
#         * * * * *
###################################################################################
def Display(value):
    cnt1=1
    while(cnt1<=value):
        cnt2=1
        while(cnt2<=value):
            print("*",end=" ")
            cnt2=cnt2+1
        print()
        cnt1=cnt1+1
def main():
    no=int(input("Enter the no : "))

    Display(no)

if __name__ == "__main__":
    main()