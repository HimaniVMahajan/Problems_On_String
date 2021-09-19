/* Write a program which accept string from user and accept one character. Return index of first occurrence of that character.*/

#include<stdio.h>
  
#define ERRMEMORY -1
  
int CheckFirstOccurrence(char *arr, char cVal)
 {
	int i = -1 , iCnt = 0;
	
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	while(*arr != '\0')
	{
		if(*arr == cVal)
		{
			i = iCnt;
			break;
		}
		iCnt++;
		arr++;
	}
	
	if(*arr == cVal)
	{
		return i;
	}
	return i;
 }
	  
int main()
 {
	char str[20] = {'\0'} , ch = '\0';
	int iRet = 0;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	printf("\nEnter the character:\t");
	scanf(" %c",&ch);
	
	iRet = CheckFirstOccurrence(str,ch);
	
	printf("\nIndex of First Occurrence of that character are:\t%d\n",iRet);

	return 0;
 }
