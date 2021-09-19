/* Write a program which accept string from user and convert it into upper case. */

#include<stdio.h>

int ConvertInToUpperCase(char *arr)
{
	if(arr == NULL)
	{
		return -1;
	}
	
	while(*arr != '\0')
	{
		if((*arr>='a') && (*arr<='z'))
		{
			*arr = *arr - 32;
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
	
	iRet = ConvertInToUpperCase(str);
	
	printf("\nUpper Case String are:\t%s\n",str);
	
	return 0;
}