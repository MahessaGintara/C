#include<stdio.h>
//if
int main(int argc, char const *argv[])
{
    int angka1 = 1, angka2 = 2;
    if (angka1 < angka2)
    {
        printf("Angka1 lebih kecil dari angka2\n");
    }
    else if (angka1 == angka2)
    {
        printf("Angka1 lebih samadengan dari angka2\n");
    }
    else
    {
        printf("Angka1 lebih besar dari angka 2\n");
    }
    
    return 0;
}
