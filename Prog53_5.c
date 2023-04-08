#include<stdio.h>

void Display()
{
	static int i = 1;
	static char ch = 'a';
	
	if(i <= 5)
	{
		printf("%c ",ch);
		i++;
		ch++;
		Display();
	}
}

int main()
{
	Display();
	
	return 0; 
}