#include <stdio.h>
#include <stdbool.h>

void header();
void headerModule(char *moduleName);
bool isValidChoice(int start, int end, int choice);

int main()
{
    int repeat = 1;
    while (repeat)
    {
        const int startMainModule = 1;
        const int endMainModule = 2;
        int selectedMainModule = 0;

        header();

        do
        {
            printf("\n");

            printf("Pilih modul yang tersedia:\n");
            printf("1. Produk\n");
            printf("2. Transaksi\n");

            printf("Pilih berdasarkan angka (%d-%d): ", startMainModule, endMainModule);
            scanf("%d", &selectedMainModule);
        } while (!isValidChoice(startMainModule, endMainModule, selectedMainModule));

        printf("\nPASSED\n");

        switch (selectedMainModule)
        {
        case 1:
            int selectedProductSubModule = 0;
            const int startProductSubModule = 1;
            const int endProductSubModule = 6;

            while (selectedProductSubModule != endProductSubModule)
            {
                do
                {
                    printf("\n");
                    headerModule("Produk");

                    printf("Pilih submodul yang tersedia:\n");
                    printf("1. Lihat semua produk\n");
                    printf("2. Lihat produk berdasarkan kategori\n");
                    printf("3. Tambah produk baru\n");
                    printf("4. Ubah data produk\n");
                    printf("5. Hapus produk\n");
                    printf("6. Keluar modul\n");

                    printf("Pilih berdasarkan angka (%d-%d): ", startProductSubModule, endProductSubModule);
                    scanf("%d", &selectedProductSubModule);
                } while (!isValidChoice(startProductSubModule, endProductSubModule, selectedProductSubModule));

                printf("\nPASSED\n");
            }

            break;
        case 2:
            int selectedTransactionSubModule = 0;
            const int startTransactionSubModule = 1;
            const int endTransactionSubModule = 3;

            while (selectedTransactionSubModule != endTransactionSubModule)
            {
                do
                {
                    printf("\n");
                    headerModule("Transaksi");

                    printf("Pilih submodul yang tersedia:\n");
                    printf("1. Buat transaksi baru\n");
                    printf("2. Lihat seluruh history transaksi\n");
                    printf("3. Keluar modul\n");

                    printf("Pilih berdasarkan angka (%d-%d): ", startTransactionSubModule, endTransactionSubModule);
                    scanf("%d", &selectedTransactionSubModule);
                } while (!isValidChoice(startTransactionSubModule, endTransactionSubModule, selectedTransactionSubModule));

                printf("\nPASSED\n");
            }
            break;

        default:
            break;
        }
    }

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

/**
 * Prints the header of a module
 *
 * This function prints the header of a module,
 * which includes the name of the module and
 * a separator line.
 *
 * @param moduleName the name of the module
 */
void headerModule(char *moduleName)
{
    printf("====== Modul %s ======\n", moduleName);
}

/**
 * Checks if the given choice is valid
 * within the range of start and end
 *
 * @param start the start of the range
 * @param end the end of the range
 * @param choice the choice to be validated
 * @return true if the choice is valid, false otherwise
 */
bool isValidChoice(int start, int end, int choice)
{
    for (int i = start; i <= end; i++)
    {
        if (i == choice)
        {
            return true;
        }
    }

    return false;
}