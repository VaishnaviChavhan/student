#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	char name[n][100];
	for(int i=0; i<n; i++)
	{
		printf("enter the name: ");
		scanf("%s",name[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("%s ",name[i]);
	}
return 0;
}	
