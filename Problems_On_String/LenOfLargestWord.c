//Write a program which accept string from user and return length of largest word. 

#include<stdio.h>

int LenOfLargestWord(char *str)
{
	int iCheck = 0, iCount = 0;
	
	if(str == NULL)
	{
		return -1;
	}
	
	while(*str != ' ')
	{
		iCheck++;
		str++;
	}
	str++;
	
	while(*str != '\0')
	{
		if(*str != ' ')
		{
			iCount++;
		}
		
		if(*str == ' ')
		{
			if(iCount > iCheck)
			{
				iCheck = iCount;
			}
			iCount = 0;
		}
		str++;
	}
	
	if(iCount > iCheck)
	{
		iCheck = iCount;
	}
	return iCheck;
}

int main()
{
	char arr[50] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);
	
	iRet = LenOfLargestWord(arr);
	
	printf("\nLength of largest word from string:\t%d\n",iRet);
	
	return 0;
}