///////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such elements which are
//divisible by 5.
//Input : N : 6
//
//Elements :85 66 3 80 93 88
//
//Output : 85 80
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iNo)
{
   int iCnt=0;

   printf("no of divisible 5 id :\n");

   for(iCnt=0; iCnt<iNo; iCnt++)
   {
      if(Arr[iCnt]%5==0)
      {
         printf("%d\t",Arr[iCnt]);
      }
   }
}

int main()
{
   int iSize=0, iRet=0, iCnt=0;
   int *ptr=NULL;

   printf("Enter the No of Element\n");
   scanf("%d",&iSize);

   ptr=(int*)malloc(sizeof(int)*iSize);

   if(ptr==NULL)
   {
      printf("UNEBLE to locate Memory\n");
      return -1;
   }

   printf("Enter the Element\n");

   for(iCnt=0; iCnt<iSize; iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }

   Display(ptr,iSize);

   free(ptr);
   
   return 0;
}