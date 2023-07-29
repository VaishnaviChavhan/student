#include<stdio.h>
int main()
{
int n,b;
printf("enter the value of n: ");
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){
printf("enter the element: ");
scanf("%d",&b);
a[i]=b;
}
int k;
printf("enter the value of k: ");
scanf("%d",&k);
for(int i=0; i<n; i++){
if(a[i]==k){
printf("it exists\n");
}else{
printf("not exits\n");
}
}
return 0;
}
