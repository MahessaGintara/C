#include<stdio.h>
// #include<string.h> digunakan untuk membandingkan string
#include<string.h>

int main(int argc, char const *argv[])
{
    /*char * nama = "mahessa"; 
    sama dengan 
    char nama[] = "mahessa";
    */

    char * name = "mahessa";
    int umur = 16;

    printf("umur %s adalah %d tahun\n", name, umur);

    //memandingkan 2 string
    if (strncmp(name,"mahessa", 4)==0)
    {
        printf("Halo, Mahessa\n");
    }else
    {
        printf("Kamu bukan Mahessa. Pergi sana!\n");
    }
    
    

    return 0;
}
