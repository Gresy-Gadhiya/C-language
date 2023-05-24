#include<stdio.h>
main()
{
	int i,j,max,r,c;
	int a[i][j];
	printf("enter r:");
	scanf("%d",&r);
	
		printf("enter c:");
	scanf("%d",&c);


printf("enter the array element :");	 
     
     for(i=0;i<=r;i++)
     {
     	for(j=0;j<=c;j++)
     {
	 printf("enter the number :");
     	scanf("%d",&a[i][j]);
       }
	 }
	  printf(" the arrey is:");
	    for(i=0;i<=r;i++)
	{ 
	  for(j=0;j<=c;j++)
	
	  {
	  	printf("%d",a[i][j]);
	  }
}
	  max=a[0][0];
	  for(i=1;i<=r;i++)
	{ 
	  for(j=0;j<=c;j++)
	
	  {
        if(max<a[i][j])
        {
        	max=a[i][j];
		}
      }
	}
	  printf("the largest array element is: %d",max);
     
}
