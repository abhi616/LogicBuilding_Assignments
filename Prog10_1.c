#include<stdio.h>

double CircleArea(float fRadius)
{
	double fArea = 0.0;
	const float PI = 3.14;
	
	fArea = PI * fRadius * fRadius;
	
	return fArea;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter radius : \n");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	
	printf("Area of circle is : %f\n",dRet);
	
	return 0;
}