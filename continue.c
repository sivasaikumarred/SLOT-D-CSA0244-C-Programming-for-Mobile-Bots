#include<stdio.h>
int main()
{
	int i,p,q,r;
	printf("enter the number\n");
	scanf("%d%d",&p,&q);
	printf("the number to be skipped is \n");
	scanf("%d",&r);
	i=p;
	for(i>=p;i<=q;i++)
	{
		if(i==r)
		continue;
		else
		printf(" %d",i);
    }
	
    
}
