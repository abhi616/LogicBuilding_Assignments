#include<stdio.h>
#include<fcntl.h>

int CountChar(char FName[], char cValue)
{
	char Data[100];
	int fd = 0, Length = 0, Count = 0;
	
	fd = open(FName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else 
	{
		while((Length = read(fd,Data,sizeof(Data))) != 0)
		{
			for(int i = 0; i< Length; i++)
			{
			    if(Data[i] == cValue)
				{
					Count++;
				}	
			}
		}
	}
	
	return Count;
	
	close(fd);
}

int main()
{
	char FileName[20];
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter file name which you want to open : \n");
	scanf("%s",FileName);
	
	printf("Enter character : ");
	scanf(" %c",&ch);
	
	iRet = CountChar(FileName,ch);
	
	printf("Frequency of %c is : %d\n",ch,iRet);
	
	return 0;
}
