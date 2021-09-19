/* Accept string from user and calculate the length of that string. */

#include<stdio.h>

int CalLen(char *arr)
{
	int iLen = 0;
	
	if(arr == NULL)
	{
		return -1;
	}
	
	while(*arr != '\0')
	{
		if(*arr != ' ')
		{
			iLen++;
		}
		arr++;
	}
	
	return iLen;
}

int main()
{
	char str[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	iRet = CalLen(str);
	
	printf("\nLength of the string is:\t%d\n",iRet);
	
	return 0;
}
	