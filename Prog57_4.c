#include<stdio.h>
#include<fcntl.h>

int main()
{
	char fName[30];
	int fd = 0, Size = 0, Length = 0;
	char Data[100];
	
	printf("Enter file name which contains data : \n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open this file\n");
		return 0;
	}
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		Size = Size + Length;
	}
	
	printf("Size of file is %d\n",Size);
	return 0;
}