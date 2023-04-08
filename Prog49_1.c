#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT No)
{
   UINT iMask = 0X00004000;
   UINT iRet = 0;
	
   iRet = No & iMask;
   
   if(iRet == iMask)
   {
	   return TRUE;
   }
   else
   {
	   return FALSE;
   }
}

int main()
{
   UINT Value = 0;
   BOOL bRet = FALSE;
   
   printf("Enter number : ");
   scanf("%d",&Value);
   
   bRet = ChkBit(Value);
   
   if(bRet == TRUE)
   {
	   printf("\n15th bit of number is ON\n");
   }
   else
   {
	   printf("\n15th bit of number is OFF\n");
   }
   
   return 0;	
}
