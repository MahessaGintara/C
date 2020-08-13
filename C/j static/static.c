#include<stdio.h>

int kode()
{
    static int count = 0;
    count++;
    return count;
}

int main(int argc, char const *argv[])
{
    printf("%d", kode());
    printf("%d", kode());
    
    return 0;
}
