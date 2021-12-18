//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept temperature in Fahrenheit and convert it into
//  celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double ConCelsius(float fNo)
{
	double dCel=0.00;

	dCel=(fNo -32)*5/9;

	return dCel;
}

int main()
{
	float fValue=0.0;
	double dRet=0.00;

	printf("Enter the Tempreture in Farenheit : \n");
	scanf("%f",&fValue);

	dRet=ConCelsius(fValue);

	printf("Tempreture in Celcius is : %lf",dRet);

	return 0;
}