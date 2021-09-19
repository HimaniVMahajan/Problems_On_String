/* Write a program which accept string from user and copy the contents of that string into another string. */
  
#include<stdio.h>
  
#define ERRMEMORY -1
  
int StringCopy(char *arr, char *brr)
 {
	if(arr == NULL)
	{
		return ERRMEMORY;
	} 
	
	while(*arr != '\0')
	{
		*brr = *arr;
		arr++;
		brr++;
	}
 }
	  
int main()
{
	char str1[20] = {'\0'} , str2[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string1:\t");
	scanf("%[^'\n']s",str1);
	
	iRet = StringCopy(str1,str2);
	
	printf("\nAnother string are:\t%s\n",str2);

	return 0;
 }
