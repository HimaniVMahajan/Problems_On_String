/* Write a program which accept string from user and toggle the case. */

#include<stdio.h>

int ToggleTheCase(char *arr)
{
	if(arr == NULL)
	{
		return -1;
	}
	
	while(*arr != '\0')
	{
		if((*arr>= 'A') && (*arr<='Z'))
		{
			*arr = *arr + 32;
		}
		else if((*arr>= 'a') && (*arr<='z'))
		{
			*arr = *arr - 32;
		}
		else if(*arr == ' ')
		{
			arr++;
			if((*arr>= 'A') && (*arr<='Z'))
			{
				*arr = *arr + 32;
			}
			else
			{
				*arr = *arr - 32;
			}
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
	
	iRet = ToggleTheCase(str);
	
	printf("\nToggle Case String are:\t%s\n",str);
	
	return 0;
}