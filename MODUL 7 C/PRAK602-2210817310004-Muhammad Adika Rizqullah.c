#include <stdio.h>

int main(){
    int baris,a,isi;
    scanf("%d", &baris);
    int angka[baris];
    for(a = 0; a < baris; a++){
        scanf("%d",&isi);
        angka[a]=isi;
    }
    for(a = 0; a < baris; a++){
     printf("%d ", angka[a] * (a + 1));
    }
}
