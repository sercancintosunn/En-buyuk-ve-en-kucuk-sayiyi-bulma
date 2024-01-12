#include <stdio.h>
#include <stdlib.h>

int enBuyuk(int dizi);
int enKucuk(int array);

int main()
{

    int sayi[10];

    for(int i = 0; i < 10; ++i){

        printf("%d-Bir sayi girin:", i+1);
        scanf("%d", &sayi[i]);
    }

    printf("\nEn buyuk sayi %d dir.\n", enBuyuk(sayi));
    printf("En kucuk sayi %d dir.\n", enKucuk(sayi));




    return 0;
}

int enBuyuk(int dizi)
{
    int *p;
    int enbuyuk;

    p = dizi;

    enbuyuk = *p;

    for(int j = 0; j < 10; ++j){

        if(*(p+j) > enbuyuk)
            enbuyuk = *(p+j);
    }

    return enbuyuk;
}

int enKucuk(int array)
{
    int *p;
    int enkucuk;

    p = array;

    enkucuk = *p;

    for(int k = 0; k < 10; ++k){

        if(*(p+k) < enkucuk)
            enkucuk = *(p+k);
    }

    return enkucuk;

}
