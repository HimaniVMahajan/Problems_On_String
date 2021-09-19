/* Write a program which accept string from user and accept one character. Return frequency of that character. */

#include<stdio.h>
  
#define ERRMEMORY -1
  
int CheckCharacter(char *arr, char cVal)
 {
	int iFreq = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	while(*arr != '\0')
	{
		if(*arr == cVal)
		{
			iFreq++;
		}
		arr++;
	}
	return iFreq;
 }
	  
int main()
 {
	char str[20] = {'\0'} , ch = '\0';
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	printf("\nEnter the character:\t");
	scanf(" %c",&ch);
	
	iRet = CheckCharacter(str,ch);
	
	printf("\nFrequency of that character are:\t%d\n",iRet);

	return 0;
 }

