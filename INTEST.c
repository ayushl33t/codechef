#include<stdio.h>
int main(){
    int a,b,i;
    int count=0,input;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&input);
        if(input%b==0){
            count++;
        }

    }
    printf("%d",count);

return 0;
}
