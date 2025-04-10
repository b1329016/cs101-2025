#include <stdio.h>
int my_strlen(char* s){
    if(!*s)return 0;
    return 1 + my_strlen(s+1);
}


int main(){
    char s[]="I am a girl!";
    printf("(%s)len = %d\n",s,my_strlen(s));
    return 0;
}
