#include <stdio.h>
#include <stdlib.h>



int main() {
    char islem;
    double sayi1, sayi2, sonuc;

    printf(" Hesap Makinesi\n");
    printf("islem secin (+, -, *, /): ");
    scanf(" %c", &islem);

    printf("Ilk sayiyi girin: ");
    scanf("%lf", &sayi1);
    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        case '/':
            if (sayi2 != 0)
                sonuc = sayi1 / sayi2;
            else {
                printf("Hata: Sifira bolme yapilamaz.\n");
                return 1;
            }
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        default:
            printf("Gecersiz islem secimi.\n");
    }

    return 0;
}
