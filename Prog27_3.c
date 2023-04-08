#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{			
			break;
		}
		str++;
		iCnt++;
	}
	
	if(*str == '\0')
	{
       iCnt = -1;
	}
	
	return iCnt;
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
	
	iRet = FirstChar(arr,cValue);
	
	printf("Character location is : %d\n",iRet);
	   
	return 0;
}