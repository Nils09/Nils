######################################################################
#Write a program which accept one number and display below pattern.
#Input : 5
#Output : 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
#####################################################################

def Display(value):
    cnt1=1
    no1=1
    while(cnt1<=value):
        cnt2=1
        while(cnt2<=no1):
            print(cnt2,end=" ")
            cnt2=cnt2+1

        print()
        cnt1=cnt1+1
        no1 = no1 + 1


def main():
    no=int(input("Enter the no : "))

    Display(no)

if __name__ =="__main__" :
    main()