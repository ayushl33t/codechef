#include<stdio.h>
int main(){
int a,b=5,c,d=0,n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a);
while(a/b!=0){
c=a/b;
b=b*5;
d=c+d;
}printf("%d\n",d);
d=0;
b=5;}
return 0;
}
