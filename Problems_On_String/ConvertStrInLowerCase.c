/* Write a program which accept string from user and convert it into lower case. */

#include<stdio.h>

int ConvertInToLowerCase(char *arr)
{
	if(arr == NULL)
	{
		return -1;
	}
	
	while(*arr != '\0')
	{
		if((*arr>='A') && (*arr<='Z'))
		{
			*arr = *arr + 32;
		}
		arr++;
	}
}
		
int main()
{
	char str[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	iRet = ConvertInToLowerCase(str);
	
	printf("\nLower Case String are:\t%s\n",str);
	
	return 0;
}