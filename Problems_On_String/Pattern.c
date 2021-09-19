/* Write a program which accept string from user and print below pattern. 

Input :   	“PPA” 	
Output :   	P 	P 	A 
 	 	 	P 	P 	A 
 	 	 	P 	P 	A 
*/

#include<stdio.h>

void Pattern(char *str)
{
	char *str1 = NULL;
	char *temp = NULL;
	int iLen = 0;
	
	if(str == NULL)
	{
		return;
	}
	
	str1 = str;
	temp = str;
	
	while(*str != '\0')
	{
		printf("\nHii\n");
		iLen++;
	}
	str--;
	
	printf("\n%d\n",iLen);
	
	for(int i=0; i<iLen; i++)
	{
		for(int j=0; j<iLen; j++)
		{
			printf("%c\t",*str1);
			str1++;
		}
		printf("\n");
		str1 = temp;
	}
}

int main()
{
	char arr[30] = {'\0'};
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);
	
	Pattern(arr);
	
	return 0;
}
	