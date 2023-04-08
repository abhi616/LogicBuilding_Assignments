#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char fName[20];
	int fd = 0, Length = 0;
	char Data[100];
	
	printf("Enter file name to Read and Display the content : \n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return 0;
	}
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,Length);
	}
	
	return 0;
}