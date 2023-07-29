#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int a[n];
int j=1;
for(int i=0; i<n; i++){
if(n%j==0){
a[i]=j;
}
j++;
}
for(int i=0; i<n; i++){
printf("a[%d]:%d\n",i,a[i]);
}
return 0;
}

