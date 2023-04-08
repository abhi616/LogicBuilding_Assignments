#include<stdio.h>

int CountSpace(char *ch)
{
	static int iCount = 0;
	
	if(*ch != '\0')
	{
		if(*ch == ' ')
		{
			iCount++;
		}
		CountSpace(++ch);
	}
	
	return iCount;
}

int main()
{
	char cArr[20] = "";
	int iRet = 0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",cArr);
	
	iRet = CountSpace(cArr);
	
	printf("White space count is : %d\n",iRet);
	
	return 0;
}