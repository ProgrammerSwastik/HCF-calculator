
#include<stdio.h>


int main()
{
	
	int i;
	int j;
	int h;
	int n;
	int a[100];
	
	int hcf(int,int);
	
	printf("******************************WELCOME TO THE HCF CALCULATOR******************************\n");
	
	printf("                                                                   \n");
	
	printf("Enter how many numbers you want to add :");
	scanf("%d", & n);
	
	printf("                                                                   \n");
	
	for(i=0;i<n;i++)
	{
		
		printf("Enter a number:");
		scanf("%d", & a[i]);
		
		printf("                                                                   \n");
		
	}
	
	
	for(i=0;i<n-1;i++)
	{
		
	h=hcf(a[i],a[i+1]);
	a[i+1]=h;
	
	}
	
	
	printf("The HCF is => %d\n", h);
	
	printf("                                                                   \n");
	
	printf("******************************BYE BYE*****************************                                                                   \n");
	
	
	
		
}



int hcf(int a,int b)
{
	
	if(a%b==0)
	{
	
	return b;
		
	}
	
	else
	{
		
	return(hcf(b,a%b));
		
	}
	
}
    

