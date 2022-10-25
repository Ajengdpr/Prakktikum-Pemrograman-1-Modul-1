#include <stdio.h>
#include<math.h>

int main () {

    float jumlah_berkeliling = 5;
    float jarak_tempuh = 14;
    float keliling = jarak_tempuh/jumlah_berkeliling;
    float jari_jari = keliling/(6.28);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran \n", jumlah_berkeliling);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer \n", jarak_tempuh);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer \n", jari_jari);

}