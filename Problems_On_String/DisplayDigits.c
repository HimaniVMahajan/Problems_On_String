/* Write a program which accept string from user and display only digits from that string. */

#include<stdio.h>

int DisplayDigits(char *arr)
{
	if(arr == NULL)
	{
		return -1;
	}
	
	while(*arr != '\0')
	{
		if((*arr>='0') && (*arr<='9'))
		{
			printf("%c\t",*arr);
		}
		arr++;
	}
	printf("\n");
}

 int main()
{
	char str[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	iRet = DisplayDigits(str);
	
	return 0;
}