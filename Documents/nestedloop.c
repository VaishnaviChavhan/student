/*        //Multiplication Table
#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=10; j++){
int a=j*i;
printf("%d * %d = %d\n", j, i, a);
}
printf("\n");
}
return 0;
}*/

//take 10 no. ftu and print product of their
/*#include<stdio.h>
int main()
{ 
int p=1;
for(int i=1; i<=10; i++){
int n;
printf("enter the value of n: ");
scanf("%d",&n);
p=p*n;
}
printf("p:%d\n",p);
return 0;
}*/

                    //SUM
/*#include<stdio.h>
int main()
{
int sum=0;
for(int i=1; i<=10; i++){
int n;
printf("enter the value of n: ");
scanf("%d",&n);
sum+=n;
}
printf("sum:%d\n",sum);
return 0;                 
}*/

           // all perfect no. udnder 100
/*#include<stdio.h>
int main()
{
int n=100;
for(int i=1; i<n; i++){
int sum=0;
for(int j=1; j<i; j++){
if(i%j==0){
sum+=j;
}
}if(sum==i){
printf("i:%d\n",i);
}
}
return 0;
}*/

                  //(1)PATTERNS
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",j);
}
printf("\n");
}
return 0;
}
                 1
                 1 2
                 1 2 3
                 1 2 3 4
                 1 2 3 4 5              
*/

                 //(2)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",i);
}
printf("\n");
}
return 0;
}             1
              2 2
              3 3 3
              4 4 4 4
              5 5 5 5 5
*/

                //(3)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=5; j>=i; j--){
printf("%d ",j);
}
printf("\n");
}
return 0;
}              5 4 3 2 1
               5 4 3 2
               5 4 3
               5 4
               5
*/
 
                 //(4)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=1; j<=k; j++){
printf("%d ",j);
}
printf("\n");
k=k-1;
}
return 0;
}              1 2 3 4 5 
               1 2 3 4
               1 2 3
               1 2 
               1 
*/

                //(5)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=1; j<=k; j++){
printf("%d ",k);
}
printf("\n");
k=k-1;
}
return 0;
}             5 5 5 5 5
              4 4 4 4
              3 3 3
              2 2 
              1
*/

                //(6)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=1; j<=k; j++){
printf("* ");
}
printf("\n");
k=k-1;
}
return 0;
}              * * * * *
               * * * *
               * * * 
               * * 
               *
*/

                 //(7)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=5; j>=i; j--){
printf("%d ",k);
}
printf("\n");
k+=0;
}
return 0;
}            5 5 5 5 5
             5 5 5 5
             5 5 5
             5 5
             5
*/

                //(8)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",k);
}
printf("\n");
k-=1;
}
return 0;
}         5
          4 4
          3 3 3
          2 2 2 2
          1 1 1 1 1
*/

                  //(9)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=1;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",k);
k+=1;
}
printf("\n");
}
return 0;
}            1
             2 3
             4 5 6
             7 8 9 10 
             11 12 13 14 15
*/      
      
                 //(10)       
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=1;
int m=1;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){
printf("%d ",k);
k+=1;
}
printf("\n");
m+=2;
}
return 0;
}           1
            2 3 4
            5 6 7 8 9
*/

                  //(11)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=1; j<=k; j++){
printf("%d ",j);
}
printf("\n");
}
return 0;
}             1 2 3 4 5 
              1 2 3 4 5
              1 2 3 4 5
              1 2 3 4 5 
              1 2 3 4 5 
*/

               //(12)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=5; j++){
printf("%d ",i);
}
printf("\n");
}
return 0;
}             1 1 1 1 1 
              2 2 2 2 2
              3 3 3 3 3
              4 4 4 4 4
              5 5 5 5 5
*/

              //(13)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=5; j++){
printf("* ");
}
printf("\n");
}
return 0;
}              * * * * *
               * * * * *
               * * * * *
               * * * * *
               * * * * *
*/

             //(14)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",i*i);
}
printf("\n");
}
return 0;
}           1
            4 4
            9 9 9
            16 16 16 16
*/

              //(15)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int m=1;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",m);
}
printf("\n");
m+=2;
}
return 0;
}             1
              3 3
              5 5 5
              7 7 7 7
              9 9 9 9 9
*/

                  //(16)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=0; i<=n; i++){
for(int j=0; j<=i; j++){
printf("%d ",j);
}
printf("\n");
}
return 0;
}              0
               0 1
               0 1 2
               0 1 2 3
               0 1 2 3 4
               0 1 2 3 4 5 
*/

               //(17)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(i+j<=n){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}
return 0;
}               - - - - *
                - - - * *
                - - * * *
                - * * * *
                * * * * *
*/

                //(18)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=5; j>=1; j--){
if(j>i){
printf(" ");
}else{
printf("%d",j);
}
}
printf("\n");
}
return 0;
}             - - - - 1
              - - - 2 1
              - - 3 2 1
              - 4 3 2 1
              5 4 3 2 1 
*/

                 //(19)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(i+j<=n){
printf(" ");
}else{
printf("%d",i);
}
}
printf("\n");
}
return 0;
}            - - - - 1
             - - - 2 2
             - - 3 3 3
             - 4 4 4 4
             5 5 5 5 5 
*/

              //(20)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}
return 0;
}              * * * * *
               - * * * *
               - - * * *
               - - - * *
               - - - - *
*/

                 //(21)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=4;
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("%d",k);
k-=1;
}
}
printf("\n");
k+=(n-i);
}
return 0;
}             4 3 2 1 0
              - 3 2 1 0
              - - 2 1 0
              - - - 1 0
*/

                //(22)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=i; j>=1; j--){
printf("%d ",j);
}
printf("\n");
}
return 0;
}		1
		2 1
		3 2 1 
		4 3 2 1
		5 4 3 2 1
*/

		//(23)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("%d",i);
}
}
printf("\n");
}
return 0;
}   		1 1 1 1 1
		- 2 2 2 2
		- - 3 3 3
		- - - 4 4
		- - - - 5
*/

		//(24)**
/*#include<stdio.h>
int main()
{
int n;
int count=5;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
printf(" ");
}
for (int k=1; k<=n-i+1; k++){
printf("%d",count);
count--;
}
printf("\n");
}
return 0;
} 	
	5 4 3 2 1
          9 8 7 6
	    12 11 10
	       14 13 
		  15  
*/
		//(25)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(i+j<=n){
printf(" ");
}else{
printf("#");
}
}
printf("\n");
}
return 0;
}   		- - - - #
		- - - # #
		- - # # #
		- # # # #
		# # # # #
*/
		//(26) 
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=1;
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<k){
printf(" ");
}else{
printf("%d",i);
}
}
printf("\n");
k+=2;
}
return 0;
}   		1 1 1 1 1
		    2 2 2
			3
*/
		//(27)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=2;
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("%d",k);
}
}
printf("\n");
k+=2;
}
return 0;
}   		2 2 2 2 2
		- 4 4 4 4 
		- - 6 6 6
		- - - 8 8
		- - - - 10
*/
		//(28)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=1; j<=5; j++){
if(j<k){
printf(" ");
}else{
printf("%d",i);
}
}
printf("\n");
k-=2;
}
return 0;
}   		- - - - 1
		- - 2 2 2
		3 3 3 3 3
*/
		//(29)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int c=0;
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
if(i%2==0){
c+=1;
printf("%d",c);
}else{
printf("%d",c);
c-=1;
}
}
c+=5;
printf("\n");
}
return 0;
}   		1 2 3 4 5 
		10 9 8 7 6
		11 12 13 14 15
		20 19 18 17 16
		21 22 23 24 25
*/
		//(30)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
int k=1;
for(int j=1; j<=n; j++){
if(i+j<=n){
printf(" ");
}else{
printf("%d",k);
k+=1;
}
}
printf("\n");
}
return 0;
}
		- - - - 1
		- - - 1 2
		- - 1 2 3
		- 1 2 3 4
		1 2 3 4 5
*/

		//(31)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<=i){
printf("%d",i);
}else{
printf("%d",j);
}
}
printf("\n");
}
return 0;
}   		1 2 3 4 5
		2 2 3 4 5
		3 3 3 4 5
		4 4 4 4 5
		5 5 5 5 5
*/

		//(32)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
for(int j=0; j<=k; j++){
printf("%d ",j);
}
printf("\n");
k--;
}
return 0;
}   		0 1 2 3 4 5
		0 1 2 3 4
		0 1 2 3
		0 1 2 
		0 1 
*/		 

		//(33)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=5;
for(int i=1; i<=n; i++){
int m=k;
for(int j=1; j<=k; j++){
printf("%d ",m);
m--;
}
printf("\n");
k--;
}
return 0;
}   		5 4 3  2 1 
		4 3 2 1 
		3 2 1
		2 1
		1 
*/

		//(34)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=1;
for(int i=1; i<=n;){
int m=k;
for(int j=1; j<=i; j++){
printf("%d ",m);
m--;
}
printf("\n");
i++;
k+=i;
}
return 0;
}   		1
		3 2 
		6 5 4
		10 9 8 7
		15 14 13 12 11
*/

		//(35)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("%d ",(j*i));
}
printf("\n");
}
return 0;
}   		1
		2 4
		3 6 9
		4 8 12 16 
		5 10 15 20 25
		6 12 18 24 30 36
		7 14 21 28 35 42 49
		8 16 24 32 40 48 56 64
		9 18 27 36 45 54 63 72 81
		10 20 30 40 50 60 70 80 90 100
*/

		//(36)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("* ");
}
}
printf("\n");
}
return 0;
}   		*-*-*-*-*-*-
		-*-*-*-*-*-
		--*-*-*-*-
		---*-*-*-
		----*-*-
		-----*-		
*/

		//(37)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}
return 0;
}   		* * * * *
		- * * * *
		- - * * *
		- - - * *
		- - - - *
*/		

		//(38)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<=n-i){
printf(" ");
}else{
printf("* ");
}
}
printf("\n");
}
return 0;
}   		- - - - - - *
		- - - - - *  *
		- - - - *  *  *
		- - - *  *  *  *
		- - *  *  *  *  *
		- *  *  *  *  *  *
		*  *  *  *  *  *  *
*/
		//(39)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("* ");
}
printf("\n");
}
return 0;
}   		* 
		* *
		* * *
		* * * *
		* * * * *
*/

		//(40)	
/*#include <stdio.h>

int main() {
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
for (int i = n-1; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
return 0;
}           *
	    * *
	    * * *
	    * * * *
	    * * *
	    * *
	    *
*/

		//(41)
/*#include <stdio.h>

int main() {
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
for (int i = n; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
return 0;
}       	*
		* *
		* * *
		* * * *
		* * * *
		* * *
		* * 
		*
*/


		//(42)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=0; i<n; i++){
int sum=1;
for(int j=0; j<=i; j++){
printf("%d",sum);
sum=sum*(i-j)/(j+1);
}
printf("\n");
}
return 0;
}		1
		1 1
		1 2 1
		1 3 3 1
		1 4 6 4 1
		1 5 1 0 1 0 5 1	
                1 6 1 5 2 0 1 5 6 1
*/

		//(43)**
/*#include<stdio.h>
int main()
{
int n;
int k=1;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n;){
int c=i;
for(int j=1; j<=k; j++){
if(j<i){
printf("%d ",j);
k++;
}else{
printf("%d",c);
c--;
}
}
printf("\n");
k+=2;
i++;
}
return 0;
}		1
		1 2 1
		1 2 3 2 1
		1 2 3 4 3 2 1
		1 2 3 4 5 4 3 2 1
*/		

		//(44)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<=n-i){
printf(" ");
}else{
printf("* ");
}
}
printf("\n");
}
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i+1){
printf(" ");
}else{
printf("* ");
}
}
printf("\n");
}
return 0;
}   		- - - - - *
		- - - - * - *
		- - - * - * - *
		- - * - * - * - *
		- * - * - * - * - *
		* - * - * - * - * - *
		- * - * - * - * - *
		- - * - * - * - *
		- - - * - * - *
		- - - - * - *
		- - - - - *          
*/  	

		//(45)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=1;
for(int i=1; i<=n; i++){
for(int j=7; j>=1; j--){
if(j>k){
printf(" ");
}else if(j%2==0){
printf("0");
}else{
printf("1");
}
}
printf("\n");
k+=2;
}
return 0;
}   		- - - - - - 1
		- - - - 1 0 1
		- - 1 0 1 0 1
		1 0 1 0 1 0 1			
*/

		//(46)
/*#include <stdio.h>
int main() {
int n;
int p = 1;
printf("Enter the value of n: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
if (i == 1) {
for (int j = 1; j <= n - i; j++) {
printf(" ");
}
printf(" *");
} else if (i == n) {
for (int j = 1; j <= n - i; j++) {
printf(" ");
}
printf("* ");
for (int j = 1; j <= n; j++) {
printf("* ");
}
} else {
for (int j = 1; j <= n - i; j++) {
printf(" ");
}
printf("*");
for (int j = 1; j <= p; j++) {
printf(" ");
}
printf("*");
}       
p += 2;
printf("\n");
}
return 0;
}		- - - - *
		- - - *   *
		- - *       *
		- *           *
		* - * - * - * - * 		
*/

		//(47)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(i==n){
printf("* ");
}else if(j==i){
printf("* ");
}else if(j==1){
printf("* ");
}else{
printf("  ");
}
}
printf("\n");
}
return 0;
}		*
		* *
		*   * 
		*     *
		*       *
		* * * * * *
*/

		//(48)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
int k=n;
for(int i=1; i<=n; i++){
for(int j=1; j<=k; j++){
printf("* ");
}
printf("\n");
k=k-1;
}
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
printf("* ");
}
printf("\n");
}
return 0;
}            * * * * *
	     * * * *
	     * * * 
	     * *
	     *
	     *
	     * *
	     * * *
	     * * * *
	     * * * * *            
*/

		//(49)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("* ");
}
}
printf("\n");
}
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<=n-i){
printf(" ");
}else{
printf("* ");
}
}
printf("\n");
}
return 0;
}   		* * * * *
		 * * * *
		  * * *
		   * *
		    *
		    *
		   * *
		  * * * 
		 * * * *
		* * * * *     				
*/	

		//(50)
/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n: ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(i+j<=n){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}
return 0;
} 		- - - - *
		- - - * *
		- - * * *
		- * * * *
		* * * * *
		* * * * *
		- * * * *
		- - * * * 
		- - - * *
		- - - - *					
*/								

		//(51)
#include<stdio.h>
 int main() 
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}
for (int i = n; i >= 1; i--) {
for (int j = 1; j <= i; j++) {
printf("*");
}
printf("\n");
}for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(i+j<=n){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(j<i){
printf(" ");
}else{
printf("*");
}
}
printf("\n");
}

return 0;
}      
































