#include <stdio.h>

void DisplayASCII()
{
    int i;

    printf("\n%-10s %-10s %-10s %-10s\n",
           "Symbol", "Decimal", "Hex", "Octal");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
        {
            printf("%-10s %-10d %-10X %-10o\n",
                   "CTRL", i, i, i);
        }
        else
        {
            printf("%-10c %-10d %-10X %-10o\n",
                   i, i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}