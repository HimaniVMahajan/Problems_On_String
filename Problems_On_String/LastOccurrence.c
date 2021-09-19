/* Accept string and one character from user and return the last occurence of that character. */

#include<stdio.h>

int CheckLastOccu(char *arr , char iFound)
{
	int iPos = 0 , i = -1;
	
	if(arr == NULL)
	{
		return -2;
	}
	
	while(*arr != '\0')
	{
		if(*arr == iFound)
		{
			i = iPos;
		}
		arr++;
		iPos++;
	}
	return i;
}
	
int main()
{
	char str[20] = {'\0'} ,iSearch = '\0';
	int iRet = 0;
	
	printf("\nEnter thre string:\t");
	scanf("%[^'\n']s",str);
	
	printf("\nEnter the character which you want to be search:\t");
	scanf(" %c",&iSearch);
	
	iRet = CheckLastOccu(str,iSearch);
	
	printf("\nIndex of Last Occurrence of that character :\t%d\n",iRet);
	
	return 0;
}
	
	



