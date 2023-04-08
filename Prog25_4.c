#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
	int iCnt = 0;
	 while(*str != '\0')
	 {
        if((*str == 'a') || (*str == 'A') ||(*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O')|| (*str == 'u') || (*str == 'U'))
		{
		  iCnt++;
		  break;
		}
        str++;
	 }

     if(iCnt > 0)
	 {
        return true;
	 }		 
	 else
	 {
		 return false;
	 }
	
}

int main()
{
	char Arr[20];
	bool bRet = false;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	bRet = ChkVowel(Arr);
	
	if(bRet == true)
	{
		printf("Contains vowel\n");
	}
	else
	{
		printf("There is no vowel\n");
	}
	
	
	return 0;
}
