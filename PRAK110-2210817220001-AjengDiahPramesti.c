#include <stdio.h>
#include <math.h>

int main (){

    int alas = 5;
    int tinggi = 12;
    int sisi_A = tinggi;
    int sisi_B = sqrt(alas*alas + tinggi*tinggi);
    int sisi_C = alas;
    int keliling = sisi_A + sisi_B + sisi_C;
    int luas = (alas*tinggi/2);

    printf("Diketahui : \n");
    printf("Alas = %d cm \n", alas);
    printf("Tinggi = %d cm \n",tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %d cm \n",sisi_A);
    printf("Sisi B = %d cm \n", sisi_B);
    printf("Sisi C = %d cm \n", sisi_C);
    printf("Keliling = %d cm \n", keliling);
    printf("Luas = %d cm \n", luas);
}