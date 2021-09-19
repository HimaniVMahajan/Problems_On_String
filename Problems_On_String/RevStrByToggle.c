/* Accept sing from user and reverse the contents of that string by toggling the case. 

Input :  “aCBdef” 
Output : “FEDcbA” 
*/

#include<stdio.h>
#include<string.h>

void RevStrByToggle(char *str1, char *str2)
{
	if((str1 == NULL) || (str2 == NULL))
	{
		return;
	}
	
	while(*str1 != '\0')
	{
		str1++;
	}
	
	str1--;
	
	while(*str1 != '\0')
	{
		if((*str1 >= 'A') && (*str1 <= 'Z'))
		{
			*str2 = (*str1) + 32;
		}
		else
		{
			*str2 = (*str1) - 32;
		}
		
		str1--;
		str2++;
	}
	
	*str2 = '\0';
	printf("\nReverse String by Toggling the Case: %s\n",str2);
	
}

int main()
{
	char arr[50];
	char brr[50];
	
	printf("\nEnter the first string:\t");
	scanf("%[^'\n']s",arr);
	
	RevStrByToggle(arr,brr);

	return 0;
}
	
	
	
	