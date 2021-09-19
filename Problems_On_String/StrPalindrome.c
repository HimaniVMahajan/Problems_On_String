//Accept string from user and check whether the string is palindrome or not without considering its case.

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0
typedef int bool;

bool StrPallindrome(char *str)
{
	char temp[20] = {'\0'};
	char *temp1 = temp;
	int i = 0, j = 0;
	
	if(str == NULL)
	{
		return false;
	}
	
	while(*str != '\0')
	{
		str++;
	}
	str--;
	
	while(*str != '\0')
	{
		*temp1 = *str;
		str--;
		temp1++;
	}
	
	printf("\n%s\n",temp);
	
	while((*str != '\0') && (*temp1 != '\0'))
	{
		if(str[i] != temp1[j])
		{
			break;
		}
		i++;
		j++;
		str++;
		temp1++;
	}
	
	if(str[i] != temp1[j])
	{
		return false;
	}
	

	/*str++;
	temp1 = str;
	
	while((*str != '\0') && (*temp1 != '\0'))
	{
		if((*str == *temp1) || ((*str>='A' && *str <='Z') || (*str>='a' && *str <='z')) && ((*temp1>='A' && *temp1 <='Z') || (*temp1>='a' && *temp1 <='z')))
		{
			str++;
			temp1++;
		}
		else
		{
			break;
		}
	}
	
	if(*str != *temp1)
	{
		return false;
	}
	
	return true;*/
	
}

int main()
{
	char arr[20] = {'\0'};
	bool bret=false;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);

	bret = StrPallindrome(arr);

	if(bret == true)
	{
		printf("String is pallindrome\n");
	}
	else
	{
		printf("String is not pallindrome\n");
	}
	return 0;
}