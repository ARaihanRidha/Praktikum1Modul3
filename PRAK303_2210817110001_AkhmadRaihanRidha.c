#include <stdio.h>
int main(){
    int N;

    printf("MAsukkan Niali N :");
    scanf("%i",&N);
    if (N<0)
    {
        printf("negatif");
    }
    else if (N==0){
        printf("nol");
    }
    else if (N>0){
        printf("positif");
    }
    return 0;
}