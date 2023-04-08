#include<stdio.h>

void Reverse(char *str)
{
	char *start = str;
	char *end = str;
	char temp = '\0';
	
	while(*str != '\0')
	{
		end++;
		str++;
	}
	
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",arr);
	
	Reverse(arr);
	
	printf("Reverse string : %s\n",arr);
	
	return 0;
}