#include <stdio.h>
/*
What do TTT need?
win condition check
check the user input
check the user input valid point
*/
typedef struct ttt {
    char playingField[9];
    char currentPlayer;
    char playerWin;
    char playerInput;
} titato;



int main() {
    char t = 'f';
    titato test;
    test.currentPlayer = (unsigned char)(1);
    test.playerWin = (unsigned char)(0);

    for (char c = 0; c < 9; c++) {
        test.playingField[c] = 0;
    }

    while (test.playerWin == 0) {
        // Rendering of the 1D Array to see the plotted tiles
        for (char x = 0; x < 3; x++) {
            for (char y = 0; y < 3; y++) {
                char ico;
                if (test.playingField[x*3+y] == 1) {
                    ico = 'X';
                } else if (test.playingField[x*3+y] == 2)
                {
                    ico = 'O';
                } else {
                    ico = 'X';
                }
                
                printf("%d",test.playingField[x*3+y]);
            }
            printf("\n");
        }
        printf("position: ");
        test.playerInput = (unsigned char) getchar();
        printf("your input: %c \n",test.playerInput);
    }
    

    return 0;
}