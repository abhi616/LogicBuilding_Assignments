#include<stdio.h>

int StrlenX(char *ch)
{
	static int iLength = 0;
	
	if(*ch != '\0')
	{
		iLength++;
		ch++;
		StrlenX(ch);
	}
	
	return iLength;
}

int main()
{
	char cArr[20] = "";
	int iRet = 0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",cArr);
	
	iRet = StrlenX(cArr);
	
	printf("Number of character in given string is : %d\n",iRet);
	
	return 0;
}