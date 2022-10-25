#include <stdio.h>

int main() {
    
    int A = 400000;
    int B = 350000;
    int hasil_A = A-(A*13/100);
    int hasil_B = B-(B*21/100);

    printf("Harga sepatu A adalah %d \n", A);
    printf("Harga sepatu B adalah %d \n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", hasil_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d \n", hasil_B);

}