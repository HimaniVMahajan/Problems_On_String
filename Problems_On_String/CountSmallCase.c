/* Write a program which accept string from user and count number of small characters. */

#include<stdio.h>

int CountSmallChar(char *arr)
{
	int i = 0, iCount = 0;
	
	while(*arr != '\0')
	{
		if((*arr>='a') && (*arr<='z'))
		{
			iCount++;
		}
		arr++;
	}
	return iCount;
}

int main()
{
	char str[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	iRet = CountSmallChar(str);
	
	printf("\nSmall characters in string are:\t%d\n",iRet);
	
	return 0;
}
	