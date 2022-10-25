#include <stdio.h>
int main(){
    int bil;
    printf("sebuah baris berisi satu buah bilangan cacah");
    printf(" dan batas maksimal 99(a>=0<100)\t : ");
    scanf("%i",&bil);
    if (bil>0 && bil<10)
    {
        printf("satuan");
    }
    else if (bil==0){
        printf("Nol");
    }
    else if (bil >=10 && bil<20){
        printf("Belasan");
    }
    else if (bil > 19 && bil<100){
        printf("Puluhan");
    }
    else printf("Anda Menginput Melebihi Limit Bilangan");
    return 0;
}