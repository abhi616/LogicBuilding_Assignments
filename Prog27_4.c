#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch)
{
	int iCnt = 0, iFound = -1;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{			
			iFound = iCnt;
		}
		str++;
		iCnt++;
	}
	
	return iFound;
}

int main()
{
	char arr[20];
	char cValue = '\0';
	int iRet = 0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character : \n");
	scanf(" %c",&cValue);
	
	iRet = LastChar(arr,cValue);
	
	printf("Character last location is : %d\n",iRet);
	   
	return 0;
}