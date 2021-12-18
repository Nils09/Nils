#include<stdio.h>


            float Average(int iNo1,     int iNo2,       int iNo3)
            {
                    int iSum = 0;
                    float fResult = 0.0;

                    iSum = iNo1 + iNo2 + iNo3;
                    fResult = iSum / 3;

                    return fResult;
            }

            int main()
            {
                    int iValue1 = 10;
                    int iValue2 = 20;
                    int  iValue3 = 30;

                    float fRet = 0.0;
                

                    fRet = Average(iValue1,     iValue2,    iValue3);

                    printf("Average is : %f\n",fRet);

                    return 0;
            }

