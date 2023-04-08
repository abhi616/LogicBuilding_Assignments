#include<stdio.h>
#include<fcntl.h>

void Display(char FName[], int iCnt)
{
	char Data[iCnt];
	
	int fd = 0, Length = 0;
	
	fd = open(FName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		Length = read(fd,Data,iCnt);
		
		write(1,Data,Length);
	}
	
	close(fd);
}

int main()
{
	 char FileName[30];
	 int Count = 0;
	 
	 printf("Enter file name which you wnat to open : \n");
	 scanf("%s",FileName);
	 
	 printf("Enter number of character : \n");
	 scanf("%d",&Count);
	
	 Display(FileName,Count);
	 
	 return 0;
}