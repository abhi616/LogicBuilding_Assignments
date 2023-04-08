#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fName[20];
	int fd = 0, Length = 0;
	char Data[30];
	
	printf("Enter file name which contains some data : \n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR | O_APPEND);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return 0;
	}
	
	printf("Enter the data that yow want to write : \n");
	scanf(" %[^'\n']s",Data);
	
	Length = strlen(Data);
	
	write(fd,Data,Length);
	
	return 0;
}