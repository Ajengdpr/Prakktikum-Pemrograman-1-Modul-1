#include <stdio.h>

int main() {
    
    int a = 4;
    int b = 8;
    int c = 3;
    int hasil_a = a == b;
    int hasil_b = b>c;
    int hasil_c = a!=c;
    printf("Variabel a bernilai %d \n", a);
    printf("Variabel b bernilai %d \n", b);
    printf("Variabel c bernilai %d \n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d \n", hasil_a);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d \n", hasil_b);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d \n", hasil_c);
}