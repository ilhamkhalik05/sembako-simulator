#include <stdio.h>

void header();

int main()
{
    header();
    return 0;
}

/**
 * Prints the header of the program.
 *
 * This function prints the header of the program,
 * which includes the title of the program and
 * a separator line.
 */
void header()
{
    printf("=============================================================\n");
    printf("========== Program Simulasi Manajemen Toko Sembako ==========\n");
    printf("=============================================================\n");
}