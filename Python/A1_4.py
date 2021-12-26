###############################################################################
#
#Write a program which display 5 times Marvellous on screen.
#Output : Marvellous
#         Marvellous
#         Marvellous
#         Marvellous
#         Marvellous
#
#################################################################################

def main():
    no=int(input("Enter the Number : "))

    cnt=1
    while(cnt<=no):
        print("Marvellous")
        cnt=cnt+1

if __name__ == "__main__" :
    main();