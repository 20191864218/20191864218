#include<stdio.h>
int main()
{
	int a,n,Sn=0,i=1,sum=0;
	scanf("%d%d",&a,&n);
	while(i<=n)
	{
		Sn=Sn+a;          //2   22
		a=a*10;    //20  
		sum=sum+Sn;       //2 
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
