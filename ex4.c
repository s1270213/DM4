#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,num,head = 0,tail = 0;
    for(i = 0;i < 3;i++){
        num = rand()%2;
        printf("%d\n",num);
        if(num%2 == 0){
            printf("tail\n");
            tail++;
        }else{
            printf("head\n");
            head++;
        }
    }
    printf("head:%d tail:%d\n",head,tail);
    return 0;
}
