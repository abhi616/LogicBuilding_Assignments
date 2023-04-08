#include<stdio.h>

int SmallCount(char *ch)
{
	static int iCount = 0;
	
	if(*ch != '\0')
	{
		if(*ch >= 'a' && *ch <= 'z')
		{
			iCount++;
		}
		SmallCount(++ch);
	}
	
	return iCount;
}

int main()
{
	char cArr[20] = "";
	int iRet = 0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",cArr);
	
	iRet = SmallCount(cArr);
	
	printf("Small letters count is : %d\n",iRet);
	
	return 0;
}