#include <stdio.h>

int main() {
    int sayi1, sayi2, sayi3, sayi4, toplam, carpim, sonuc;

    printf("Bir sayi yaziniz: ");
    scanf("%d", &sayi1);

    printf("Diger sayiyi yaziniz: ");
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;

    printf("Toplam: %d \n", toplam);

    printf("Bir sayi yaziniz: ");
    scanf("%d", &sayi3);

    printf("Bir sayi daha yaziniz: ");
    scanf("%d", &sayi4);

    carpim = sayi3 * sayi4;

    printf("Carpim: %d \n", carpim);


    sonuc = toplam + carpim;

    printf("Sonuc: %d\n", sonuc);




    return 0;
}
