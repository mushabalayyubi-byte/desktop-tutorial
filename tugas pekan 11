#include <stdio.h>

// Fungsi untuk mengalihkan matriks 4x4 dengan vektor 4x1
void matrix_vector_mult(int A[4][4], int x[4], int C[4]) {
    for (int i = 0; i < 4; i++) {
        C[i] = 0; // Inisialisasi awal nilai C[i] dengan 0
        for (int j = 0; j < 4; j++) {
            C[i] += A[i][j] * x[j];
        }
    }
}

int main() {
    // Matriks A berukuran 4x4
int A[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 1, 2, 3},
    {4, 5, 6, 7}
};

// Vektor x berukuran 4x1
int x[4] = {1, 2, 3, 4};

// Array untuk menyimpan hasil perkalian C (ukuran 4x1)
int C[4];

// Memanggil fungsi perkalian
matrix_vector_mult(A, x, C);

// Menampilkan hasil perkalian
printf("Hasil perkalian matriks C = A * x:\n");
for (int i = 0; i < 4; i++) {
    printf("C[%d] = %d\n", i, C[i]);
}

    return 0;
}
