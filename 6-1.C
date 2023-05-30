#include<stdio.h>
main()
{
	char a[100];
	int i,len,n=0;
	
	printf("Enter your name:");
	scanf("%s",&a);
	
	len=0;
	while(a[len]!='\0')
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(a[i] != a[len-i-1])
		{
			n=1;
			break;
		}
	}
	
	if(n)
	{
		printf("\n%s is not palindrome",a);
	}
	else
	{
		printf("\n%s is palindrome",a);
	}
	
}
