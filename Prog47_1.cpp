#include<stdio.h>

template <class T>
T Multiply(T No1, T No2)
{
	T ans;
	ans = No1 * No2;
	return ans;
}

int main()
{
	int iRet = Multiply(10,20);	
	printf("Multiplication : %d\n",iRet);
	
	float fRet = Multiply(10.0f,20.0f);	
	printf("Multiplication : %f\n",fRet);
	
	return 0;
}