/* Accept string from user and return the number of vowels from that string. */

#include<stdio.h>

int CountVowels(char *str)
{
	int iCnt = 0;
	
	if(str == NULL)
	{
		return -1;
	}
		
	while(*str != '\0')
	{
		if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E'|| *str == 'I' || *str == 'O' || *str == 'U')
		{
				iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);
	
	iRet = CountVowels(arr);
	
	printf("\n Total numbers of Vowels from that string:\t%d\n",iRet);
	
	return 0;
}