#include <stdio.h>

int main(){
    int i=1;

    while(i<=100){

        if (i%3==0 && i%5==0) printf("CracklePop\n");
        else if (i%3==0) printf("Crackle\n");
        else if (i%5==0) printf("Pop\n");
        else printf("%d\n", i);
        
        i++;
    }
}