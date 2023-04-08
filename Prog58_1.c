#include<stdio.h>
#include<fcntl.h>

int CountCapital(char FName[])
{
	int fd = 0, Length = 0, Count = 0;
	char Data[100];
	
	fd = open(FName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else 
	{		
		while((Length = read(fd,Data,sizeof(Data))) != 0)
		{
			for(int i = 0; i < Length; i++)
			{
				if(Data[i] >= 'A' && Data[i] <= 'Z')
				{
					Count++;
				}
			}
		}		
	}
	
	close(fd);
	
	return Count;
}

int main()
{
	char FileName[20];
	int iRet = 0;
	
	printf("Enter file name that you want to open : \n");
	scanf("%s",FileName);
	
	iRet = CountCapital(FileName);
	
	printf("Total capital letters in the file are : %d\n",iRet);
	
	return 0;
}
