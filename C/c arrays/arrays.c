#include <stdio.h>
int main(int argc, char const *argv[])
{
    int grades[3];
    int average;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2])/3;
    printf("Rata-rata 3 bilangan adalah: %d", average);
    return 0;
}
