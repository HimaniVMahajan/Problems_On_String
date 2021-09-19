/* Write a program which accept string from user and count number of white spaces. */

#include<stdio.h>

int CountWhiteSpaces(char *arr)
{
	int iCnt = 0;
	
	if(arr == NULL)
	{
		return -1;
	}
	
	while(*arr != '\0')
	{
		if(*arr == ' ')
		{
			iCnt++;
		}
		arr++;
	}
	return iCnt;
}
		
int main()
{
	char str[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	iRet = CountWhiteSpaces(str);
	
	printf("\nTotal numbers of White Spaces in String are:\t%d\n",iRet);
	
	return 0;
}