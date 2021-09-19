/* Write a program which accept string from user and copy the contents into another string by removing extra white spaces. 
Input :   	“Marvel    lous    multi     OS” 
Output :   	“Marvellous multi OS” 
*/

#include<stdio.h>

void LenOfLargestWord(char *str1 , char *str2)
{
	if(str1 == NULL && str2 == NULL)
	{
		return;
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
	char brr[50] = {'\0'};
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);
	
	LenOfLargestWord(arr,brr);
	
	printf("\nString after removing white spaces\n",brr);
	
	return 0;
}