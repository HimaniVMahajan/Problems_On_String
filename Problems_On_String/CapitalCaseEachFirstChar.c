/*Write a program which accept string from user and replace each occurrence of first character of each word into capital case. 

Input:- hello world space
output:- Hello World Space
*/

#include<stdio.h>

void FirstCharIsCapitalCase(char *str)
{
	if(str == NULL)
	{
		return;
	}
	
	while(*str != '\0')
	{
		if(str[0]>='a' && str[0]<='z')
		{
			str[0] = str[0] - 32;
		}
		
		if(*str == ' ')
		{
			str++;
			
			if(*str>='a' && *str<='z')
			{
				*str = *str - 32;
			}
		}
		
		str++;
	}
}

int main()
{
	char arr[50] = {'\0'};
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);
	
	FirstCharIsCapitalCase(arr);
	
	printf("\n%s\n",arr);
	
	return 0;
}