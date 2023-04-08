#include<stdio.h>
#include<fcntl.h>

int CountWhiteSpace(char FName[])
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
			    if(Data[i] == ' ')
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
	int iRet = 0;
	
	printf("Enter file name which you want to open : \n");
	scanf("%s",FileName);
	
	iRet = CountWhiteSpace(FileName);
	
	printf("Total WhiteSpace are : %d\n",iRet);
	
	return 0;
}
