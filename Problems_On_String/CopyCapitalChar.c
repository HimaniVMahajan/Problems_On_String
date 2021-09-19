/* Write a program which accept string from user and copy capital characters of that string into another string.*/

#include<stdio.h>
  
#define ERRMEMORY -1
  
int CopyCapitalChar(char *arr, char *brr)
 {
	if(arr == NULL)
	{
		return ERRMEMORY;
	} 
	
	while(*arr != '\0')
	{
		if((*arr>='A') && (*arr<='Z'))
		{
			*brr = *arr;
			brr++;
		}
		arr++;
	}
 }
 
 int main()
{
	char str1[20] = {'\0'} , str2[20] = {'\0'};
	int iRet = 0;
	
	printf("\nEnter the string1:\t");
	scanf("%[^'\n']s",str1);
	
	iRet = CopyCapitalChar(str1,str2);
	
	printf("\nCapital characters of that string are:\t%s\n",str2);

	return 0;
 }
