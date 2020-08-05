#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,num,head = 0,tail = 0;
    char str[8];
    //名前を聞く
    printf("あなたは誰？");
    scanf("%s",str);
    printf("ハロー、%s\n",str);
    for(i = 0;i < 3;i++){
        num = rand()%2;
        if(num%2 == 0){
            printf("Round %d: Heads\n",i+1);
            tail++;
        }else{
            printf("Round %d: Tails\n",i+1);
            head++;
        }
    }
    printf("Heads: %d, Tails: %d\n",head,tail);
    if(head>tail) printf("%s won\n",str);
    else printf("%s lost\n",str);
    return 0;
}
