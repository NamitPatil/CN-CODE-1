#include <stdio.h>

int main() {
    int dataatrec[11], i, c, c1, c2, c3;

    // Received data
    int data[11] = {0,1,1,1,0,0,0,0,1,0,1};

    // Calculate parity bits
    c1 = data[10] ^ data[8] ^ data[6] ^ data[4] ^ data[2] ^ data[0];
    c2 = data[9] ^ data[8] ^ data[5] ^ data[4] ^ data[1] ^ data[0];
    c3 = data[7] ^ data[6] ^ data[5] ^ data[4];

    // Calculate error position
    c = c3 * 4 + c2 * 2 + c1 ;

    if (c == 0) {
        printf("No error while transmission of data\n");
    }
    else {
        printf("\nError on position %d", c);

        printf("\nData received : ");
        for(i = 0; i < 11; i++) {
            printf("%d", data[i]);
        }

        printf("\nCorrect message is\n");

        // Correct the error
        if(data[11-c] == 0) {
            data[11-c] = 1;
        } else {
            data[11-c] = 0;
        }

        for (i = 0; i < 11; i++) {
            printf("%d", data[i]);
        }
    }

    return 0;
}


