#include <stdio.h>

int main() {
    int num;
    int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;

    printf("Enter digits (0_9). Enter any other number to stop:\n");

    while (1) {
       if (scanf("%d", &num) != 1) {
            break;
        }

        if (num == 0) c0++;
        else if (num == 1) c1++;
        else if (num == 2) c2++;
        else if (num == 3) c3++;
        else if (num == 4) c4++;
        else if (num == 5) c5++;
        else if (num == 6) c6++;
        else if (num == 7) c7++;
        else if (num == 8) c8++;
        else if (num == 9) c9++;
        else break; 
    }

    
    printf("Number   Occurrences\n");
    printf("0        %d\n", c0);
    printf("1        %d\n", c1);
    printf("2        %d\n", c2);
    printf("3        %d\n", c3);
    printf("4        %d\n", c4);
    printf("5        %d\n", c5);
    printf("6        %d\n", c6);
    printf("7        %d\n", c7);
    printf("8        %d\n", c8);
    printf("9        %d\n", c9);

    return 0;
}

