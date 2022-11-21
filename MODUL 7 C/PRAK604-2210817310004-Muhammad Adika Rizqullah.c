#include <stdio.h>
#include <string.h>

int main(){
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);
    int kode,pesan,x,a=0,b=0;
    kode=strlen(asli);
    pesan=strlen(palsu);
    if(kode !=pesan){
        printf("Panjang kalimat berbeda, pesan palsu\n");}
    else{
        for(x=0; x < kode; x++){
            if(asli[x]==palsu[x]){
                if (asli[x] == ' '){
                    printf(" ");}
                else {
                    printf("*");
                    a++;}
                }
            else{
                printf("#");
                b++;}
        }
    printf("\n* = %d",a);
    printf("\n# = %d",b);
    if(a >= b){
        printf("\nPesan Asli");}
    else{
        printf("\nPesan Palsu");}
    return 0;
    }
}

