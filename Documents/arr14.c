#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int a[n];
int t=0;
for(int i=1; i<=n;){
int c=0;
for(int j=1; j<=i;){
if(i%j==0){
c++;
}
j++;
}
if(c==2){
a[t]=i;
t++;
}
i++;
}
printf("a[%d]:%d\n",t,a[t]);
return 0;
}
