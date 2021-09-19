#include<stdio.h>

void StringRev(char str[])
{
	int i = 0 ,z= 0;
	char Temp = '\0';
	           
	
	while(str[z] != '\0')
	{
		z++;
	}
	z--;
	
	while(i<z)
	{
		Temp = str[z];
		str[z] = str[i];
		str[i] = Temp;
		i++;
		z--;
	}
}
	
int main()
{
	char arr[20] = {'\0'};
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",arr);
	
	StringRev(arr);
	
	printf("\nReverse string is:\t%s\n",arr);
	
	return 0;
}