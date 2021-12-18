///////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept radius of circle from user and calculate its area.
//  Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double CircleArea(float fRedius)
{
	float PI=3.14;
	double fArea=0.00;

	fArea=PI*fRedius*fRedius;

	return fArea;
}
int main()
{
	float fValue=0.0;
	double dArea=0.00;

	printf("Enter the Redius : \n");
	scanf("%f",&fValue);

	dArea=CircleArea(fValue);

	printf("Area of circle is : %lf",dArea);

	return 0;

}