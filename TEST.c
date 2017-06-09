#include<stdio.h>
int main()

{
    int siz=1000000;
    int x[siz],i,a;
for(i=0;i<siz;i++){
  scanf("%d",&x[i]);
}
for(i=0;i<siz;i++){
    if(x[i]==42){
        break;
    }
    else{
    printf("%d \n",x[i]);

    }}

    return 0;
}
