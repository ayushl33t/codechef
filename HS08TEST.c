#include<stdio.h>
int main(){
int x;
float y;
scanf("%d",&x);
scanf("%f",&y);
    if(x<y-0.50 && x%5==0){
        y=y-(x+0.50);
        printf("%0.2f",y);
}
else{
    printf("%0.2f",y);
}
return 0;
}
