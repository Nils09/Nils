################################################################################################
#
# Write a program which contains one function named as Add() which accepts two numbers
# from user and return addition of that two numbers.
#  Input : 11 5 Output : 16
#
#################################################################################################
def Add(valu1,value2):
    sum=valu1+value2
    return sum

def main():
    no1=int(input("Enter firt no : "))
    no2=int(input("Enter Second no : "))

    ret=Add(no1,no2)
    print("Addition is : ",ret)

if __name__ == "__main__":
    main();