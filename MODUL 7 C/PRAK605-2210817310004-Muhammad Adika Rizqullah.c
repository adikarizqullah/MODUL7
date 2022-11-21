#include <stdio.h>

int main(){
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i,j,k,n,jumlah=0;
    scanf("%d", &n);
    printf("Matriks A\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriks1[i][j]);
        }}
        printf("Matriks B\n");
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%d",&matriks2[i][j]);
            }}
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    for(k=0; k<n; k++){
                        jumlah=jumlah + matriks1[i][k]* matriks2[k][j];}
                        hasil[i][j]= jumlah;
                        jumlah=0;}}
                        printf("\nMatriks AXB\n");
                        for(i=0; i<n; i++){
                            for(j=0; j<n; j++){
                                printf("%d ", hasil[i][j]);}
                                printf("\n");}
}

