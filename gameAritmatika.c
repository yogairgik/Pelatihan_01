// l0125139 | Yoga Irgi Kurniawan | Informatika B
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tampilanAwal(){
    printf("Menu pilihan level:\n");
    printf("1. Level 1 (Penjumlahan)\n");
    printf("2. Level 2 (Pengurangan)\n");
    printf("3. Level 3 (Perkalian)\n");
    printf("4. Exit\n");
}

void programGame(int levelGame){
    int skor = 0, lives = 3, jawaban, kunciJawaban, i = 1;
    char aritmatika;

    if (lives != 0)
        do{
            int x = rand() % 201 - 100;
            int y = rand() % 201 - 100;

            if (levelGame == 1){
                aritmatika = '+';
                kunciJawaban = x + y;
            }else if (levelGame == 2){
                aritmatika = '-';
                kunciJawaban = x - y;
            }else{
                aritmatika = '*';
                kunciJawaban = x * y;
            }

            printf("%d.Hasil dari %d %c %d adalah: ", i++, x, aritmatika, y);
            scanf("%d", &jawaban);
            if (jawaban == kunciJawaban){
                skor += 2;
                printf("----------------------------------------\n");
                printf("Hore... benar !!! skor Anda %d (lives: %d)\n", skor, lives);
                printf("----------------------------------------\n");
            }else{
                skor -= 2;
                lives--;
                printf("----------------------------------------\n");
                printf("Wah... salah !!! skor Anda %d (lives: %d)\n", skor, lives);
                printf("----------------------------------------\n");
            }
        } while (lives != 0);
    printf("-------------- GAME OVER ---------------\n");
    printf("========================================\nSkor akhir Anda: %d \n", skor);
    printf("========================================\n\n");
}

int main(){
    int pilihan;
    srand(time(NULL));

    while (1){
        tampilanAwal();
        printf("Masulan pilihan anda: ");
        scanf("%d", &pilihan);
        switch (pilihan){
        case 1:
            programGame(1);
            break;
        case 2:
            programGame(2);
            break;
        case 3:
            programGame(3);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Maaf pilihan Anda salah");
            exit(0);
        }
    }
}