/* Write a program which accept 2 strings from user and check whether contents of two strings are equal or not.
(Implement strcmp()function). */

#include<stdio.h>
#include<string.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrCmp(char *str1, char *str2)
{
	if((str1 == NULL) || (str2 == NULL))
	{
		return -1;
	}
	
	while((*str1 != '\0') && (*str2 != '\0'))
	{
		
		if(*str1 != *str2)
		{
			break;
		}
		
		str1++;
		str2++;
	}
	
	if(*str1 != *str2)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char arr[50];
	char brr[50];
	BOOL bRet = TRUE;
	
	
	printf("\nEnter the first string:\t");
	scanf("%[^'\n']s",arr);
	
	printf("\nEnter the second string:\t");
	scanf(" %[^'\n']s",brr);
	
	bRet = StrCmp(arr,brr);
	
	if(bRet == TRUE)
	{
		printf("\nString is Equal\n");
	}
	else
	{
		printf("\nString is not Equal\n");
	}
	
	return 0;
}
	
	
	
	