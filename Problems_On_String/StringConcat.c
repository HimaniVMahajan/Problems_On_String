/* Write a program which accept 2 strings from user and concat second string after first string. */

#include<stdio.h>
  
#define ERRMEMORY -1
  
int StringConcat(char *arr, char *brr)
 {
	if(arr == NULL)
	{
		return ERRMEMORY;
	} 
	
	while(*arr != '\0')
	{
		arr++;
	}
	*arr = ' ';
	
	while(*brr != '\0')
	{
		/*if(*brr == ' ')
		{
			arr++;
			*arr = ' ';
		}*/
		*arr = *brr;
		brr++;
		arr++;
	}
 }
 
 int main()
{
	char str1[100] = {'\0'} , str2[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string1:\t");
	scanf("%[^'\n']s",str1);
	
	printf("\nEnter the string2:\t");
	scanf(" %[^'\n']s",str2);
	
	iRet = StringConcat(str1,str2);
	
	printf("\nConcat string are:\t%s\n",str1);

	return 0;
 }

 