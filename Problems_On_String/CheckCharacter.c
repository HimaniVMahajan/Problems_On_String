/* Write a program which accept string from user and accept one character. Check whether that character is present in 
   string or not. */
   
 #include<stdio.h>
  
 #define TRUE 1
 #define FALSE 0
 #define ERRMEMORY -1
  
 typedef int BOOL;
  
 int CheckCharacter(char *arr, char cVal)
 {
	if(arr == NULL)
	{
		return ERRMEMORY;
	}
	
	while(*arr != '\0')
	{
		if(*arr == cVal)
		{
			break;
		}
		arr++;
	}
	
	if(*arr == cVal)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
  }
	  
int main()
 {
	char str[20] = {'\0'} , ch = '\0';
	BOOL bRet = FALSE;
	
	printf("\nEnter the string:\t");
	scanf("%[^'\n']s",str);
	
	printf("\nEnter the character:\t");
	scanf(" %c",&ch);
	
	bRet = CheckCharacter(str,ch);
	
	if(bRet == TRUE)
	{
		printf("\nCharacter is Present\n");
	}
	else if(bRet == FALSE)
	{
		printf("\nCharacter is not Present\n");
	}
	else
	{
		printf("\nERROR:Unable to allocate memory\n");
	}
	
	return 0;
 }

