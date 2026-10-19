#include <stdio.h>
#include <stdlib.h>

int main() {

    char papan[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'X', 'O', 'X'}
    };

    char *p_a = &papan[0][0];

    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%c | ", *p_a);
            p_a++; 
        }
        printf("\n-------------\n");
    }

    return 0;
}