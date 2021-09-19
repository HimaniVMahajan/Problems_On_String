/* Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be 
accepted from user. (Implement strncat() function).
 
Note : If third parameter is greater than the size of second string then concat whole string after first string. 

Input : “United States” 
		“New Mexico” 
		 6 
Output : “United States New Me” 
*/
#include<stdio.h>
#include<string.h>

void StrConcatX(char *src, char *dest, int size)
{
	while(*src != '\0')
	{
		src++;
	}
	
	*src = ' ';
	src++;
	
	while((*dest != '\0') && (size != 0))
	{
		*src = *dest;
		src++;
		dest++;
		size --;
	}
	
	*src = '\0';
	*dest = '\0';
}

int main()
{
	char arr[30];
	char brr[30];
	int N = 0;
	
	printf("\nEnter the first string:\t");
	scanf("%[^'\n']s",arr);
	
	printf("\nEnter the second string:\t");
	scanf(" %[^'\n']s",brr);
	
	printf("\nEnter the size of character that you want to concat:\t");
	scanf("%d",&N);
	
	StrConcatX(arr,brr,N);
	
	printf("%s",arr);
	
	return 0;
}