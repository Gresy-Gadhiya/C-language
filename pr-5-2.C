#include<stdio.h>
main()
{
	int r,c,i,j;
	int a[r][c];
	printf("enter r:");
	scanf("%d",&r);
	
		printf("enter c:");
	scanf("%d",&c);
	 
     
     for(i=0;i<r;i++)
     {
     	for(j=0;j<c;j++)
     {
	 printf("enter a[%d][%d]:",i,j);
     	scanf("%d",&a[i][j]);
       }
	 }

	int b[r][c]; 
	    for(i=0;i<r;i++)
	{ 
	  for(j=0;j<c;j++)
	
	  {
	  	b[j][i]=a[i][j];
	  }
}
	  
	  for(i=1;i<r;i++)
	{ 
	  for(j=0;j<c;j++)
	
	  {
        
    
        printf("%d",b[i][j]);
		}
		printf("\n");
      }

  
}
