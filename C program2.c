#include <stdio.h>
int main(){
    int Percentage;
    scanf("%d",&Percentage);
    if(Percentage>=95){
        printf("A");
    }
    else if(Percentage>=85){
        printf("B");
    }
    else if(Percentage>=75){
        printf("C");
    }
    else if(Percentage>=65){
        printf("D");
    }
    else if(Percentage>=45){
        printf("E");
    }
    else{
        printf("F");
    }
}