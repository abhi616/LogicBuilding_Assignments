#include<stdio.h>
#include<fcntl.h>

int main()
{
	char fName[30];
	int fd = 0;
	
	printf("Enter file name which you want to open : \n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else 
	{
		printf("File is successfully opened in READ mode\n");
	}
	
	close(fd);
	
	return 0;
}
