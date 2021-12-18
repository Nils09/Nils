/////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept width & height of rectangle from user and calculate
// its area. (Area = Width * Height)
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectangaleArea(float fWidth, float fHeight)
{
	double dArea=0.00;

	dArea=fWidth*fHeight;

	return dArea;
}
int main()
{
	float fValue1=0.0, fValue2=0.0;

	double dArea=0.00;

	printf("Enter the Width :\n");
	scanf("%f",&fValue1);

	printf("Enter the hight :\n");
	scanf("%f",&fValue2);

	dArea=RectangaleArea(fValue1,fValue2);

	printf("Area of Rectangale is : %lf",dArea);

	return 0;
}