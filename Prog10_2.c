#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
	double fArea = 0.0;
	
	fArea = fWidth * fHeight;
	
	return fArea;
}

int main()
{
	float fValue1 = 0.0, fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("Enter width : \n");
	scanf("%f",&fValue1);
	
	printf("Enter height : \n");
    scanf("%f",&fValue2);
	
	dRet = RectArea(fValue1,fValue2);
	
	printf("Area of rectangle is : %f\n",dRet);
	
	return 0;
}