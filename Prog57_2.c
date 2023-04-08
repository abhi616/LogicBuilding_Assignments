#include<stdio.h>
#include<unistd.h>

int main()
{
	char fName[20];
	int fd = 0;
	
	printf("Enter the file name that you want to create : \n");
	scanf("%s",fName);
	
	fd = creat(fName,0777);
	
	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else 
	{
		printf("File is successfully created with the fd %d\n",fd);
	}
	
	return 0;
}