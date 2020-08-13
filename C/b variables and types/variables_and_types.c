#include<stdio.h>
//bolean types 
#define BOOL char;
#define FALSE 0;
#define TRUE 1;

/* 
    [+/-]
char [-128 to 127] bit
int [-2,147,483,648 to 2,147,483,647] bit
short [0 to 65,535]
long   [-2,147,483,648 to 2,147,483,647]
long long [–9,223,372,036,854,775,808 to 9,223,372,036,854,775,807] bit

    only[+]
unsigned int [0 to 4,294,967,295]
unsigned long [0 to 4,294,967,295]
unsigned long long [0 to 18,446,744,073,709,551,615]

    [%d.&d]
float
double

*/
int main()
{
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    sum = a + b + c;
    printf("The sum of a, b, and c is %f.", sum);

    return 0;
}

