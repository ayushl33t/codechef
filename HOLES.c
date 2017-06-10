#include<stdio.h>

int main(){
    char srt[99],t;
    int i,count=0,j=0,n,x;
    scanf("%d",&n);
        if(n<=40){
        for(i=0;i<n;i++){
        scanf("%s",srt);
        j++;
        for(x=0;srt[x]!='\0';x++){
        t=srt[x];
        if(t=='A' || t=='D'|| t=='O'|| t=='P' || t=='R' || t=='Q'){ //INSERTION OF Q IS NOT MENTIONED IN THE QUESTION BUT IS STILL REQUIRED
            count++;
       }
       else if(t=='B'){
            count=count+2;
       }}
printf("%d\n",count);
    count=0;
    }
i=0;
        }
return 0;}
