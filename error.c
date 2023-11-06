#include <stdio.h>

int main() {
    int data[11], i, c1, c2, c3, c;

    data[0] = 0;
    data[1] = 1;
    data[2] = 1;
    data[3] = 1;
    data[4] = 0;
    data[5] = 0;
    data[6] = 0;
    data[7] = 0;
    data[8] = 1;
    data[9] = 0;
    data[10] = 1;

    
    c1 = data[0] ^ data[2] ^ data[4] ^ data[6] ^ data[8] ^ data[10];
    c2 = data[1] ^ data[2] ^ data[5] ^ data[6] ^ data[9] ^ data[10];
    c3 = data[3] ^ data[4] ^ data[5] ^ data[6];

    
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
        if(data[c-1] == 0) {
            data[c-1] = 1;
        } else {
            data[c-1] = 0;
        }

        for (i = 0; i < 11; i++) {
            printf("%d", data[i]);
        }
    }

    return 0;
}

