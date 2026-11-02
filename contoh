#include <stdio.h>
#include <stdlib.h>

//Fungsi untuk menampilkan papan permainan menggunakan Pointer
void cetakPapan(char *papan) {
    printf("\n");
    printf(" %c | %c | %c \n ",  *(papan + 0), *(papan + 1), *(papan + 2));
    printf("---------\n");
    printf(" %c | %c | %c \n", *(papan + 3), *(papan + 4), *(papan + 5));
    printf("----------\n");
    printf(" %c | %c | %c \n", *(papan + 6), *(papan + 7), *(papan + 8));
    printf("\n");

}

// Fungsi untuk mengecek apakah ada pemenang
int cekPemenang(char *papan) {
    int menang[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Baris
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Kolom
        {0, 4, 8}, {2, 4, 6}             // Diagonal   
    };
    
    for (int i = 0; i < 8; i++) {
        int a = menang[i][0];
        int b = menang[i][1];
        int c = menang[i][2];

        if (*(papan + a) == *(papan + b) && *(papan + b) == *(papan + c)) {
            return 1; // Ada yang menang
        }
    }
    return 0;
}

int main() {
    // Inisialisasi papan dengan angka 1-9 sebagai petunjuk posisi
    char papan[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char *p_papan = papan; // Pointer menunjuk ke alamat elemen pertama array 'papan'

    char pemainSekarang = 'X';
    int pilihan;
    int totalLangkah = 0;
    int statusMenang = 0;

    printf("--- PERMAINAN TIC-TAC-TOE (POINTER C) ===\n");

    while (totalLangkah < 9 && !statusMenang) {
        cetakPapan(p_papan);

        printf("Pemain %c, masukkan nomor kotak (1-9): ", pemainSekarang);
        scanf("%d", &pilihan);

        //Validasi input
        if (pilihan < 1 || pilihan > 9) {
            printf("Pilihan tidak valid! Masukkan angka 1 sampai 9.\n");
            continue;
        }

        // Cek apakah posisi yang dipilih sudah diisi
        // Mengakses elemen array menggunakan aritmatika pointer (*(p_papan + indeks))
        if (*(p_papan + (pilihan - 1)) == 'X' || *(p_papan + (pilihan - 1)) == '0') {
            printf("Kotak tersebut sudah diisi, pilih kotak lain!\n");
            continue;

        }

        // mengisi nilai 'x' atau 'o' ke posisi memori yang ditunjuk pointer
        *(p_papan + (pilihan - 1)) = pemainSekarang;
        totalLangkah++;

        //Cek kemenangan
        statusMenang = cekPemenang(p_papan);

        if (statusMenang){
            cetakPapan(p_papan);
            printf("Selamat! Pemain %c MENANG!\n", pemainSekarang);
            break;

        }

        //Ganti giliran pemain
        if (pemainSekarang == 'X') {
            pemainSekarang = '0';
        } else {
            pemainSekarang = 'X';
        }
    }

    if (!statusMenang){
        cetakPapan(p_papan);
        printf("Permainan Seri / Seri!\n");
    }

    return 0;
    
}
