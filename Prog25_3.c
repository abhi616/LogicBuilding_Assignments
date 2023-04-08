#include<stdio.h>

int Difference(char *str)
{
	 int iCntSmall = 0, iCntCap = 0;
	 
	 while(*str != '\0')
	 {
		 if((*str >= 'a') && (*str <= 'z'))
		 {
			 iCntSmall++;
		 }
		 else if((*str >= 'A') && (*str <= 'Z'))
		 {
			 iCntCap++;
		 }
		 str++;
	 }
	 
	 return iCntSmall - iCntCap;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Difference(Arr);
	
	printf("%d\n",iRet);
	
	return 0;
}
