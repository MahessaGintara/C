#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
    
}
int main(int argc, char const *argv[])
{
    int result ,results;
    char name[100],nama[100],a[100] = "Mutia", b[100] = "Nandhika";

    printf("Hallo Semoga program ini berada di tangan yang tepat ya.\n");
    printf("Cuma buat mastiin\nMasukan Nama depan Kamu : ");
    scanf("%s",&name);
    printf("Masukan nama belakang kamu : ");
    scanf("%s",&nama);

    result = strcmp(name,a);
    results = strcmp(nama,b);

    if (result == 0 && results == 0)
    {
        printf("Hallo Mutia Disini aku cuma mau bilang aku suka kamu gitu aja hehe");
    }
    else
    {
        int i;
        printf("Maaf Kamu bukan orang yang saya tuju\n");
        printf("the system will restart in 10 second\n");
        for (i = 10; i > 0; i--)
        {
            delay(1000);
            printf("%d \n",i);
        }
        printf("Just Kidding Froh :v");
        // system("c:\\windows\\system32\\shutdown /r");
    }
    
    
    return 0;
}
