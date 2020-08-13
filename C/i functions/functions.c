#include<stdio.h>


// digunakan bila fungsi yang di panggil berada di bawah program utama
int perkalian(int i);

void hasil(int l){
    printf("%d\n",l);
    //fungsi tanpa return / kembalian
}

int main(int argc, char const *argv[])
{
    int l;
    l = perkalian(4);
    hasil(l);
    return 0;
}

int perkalian(int i)
{
    int k;
    k = i * i;
    return k;
}