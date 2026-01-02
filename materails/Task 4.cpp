#include <stdio.h>

int main() {
    int c1, c2, c3, c4, c5;
    int s1, s2, s3, s4, s5;
    int pair=0, triple=0;

    printf("Enter 5 cards (1=Ace, 11=Jack, 12=Queen, 13=King):\n");
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);

    s1 = 1 + (c1==c2) + (c1==c3) + (c1==c4) + (c1==c5);
    s2 = 1 + (c2==c1) + (c2==c3) + (c2==c4) + (c2==c5);
    s3 = 1 + (c3==c1) + (c3==c2) + (c3==c4) + (c3==c5);
    s4 = 1 + (c4==c1) + (c4==c2) + (c4==c3) + (c4==c5);
    s5 = 1 + (c5==c1) + (c5==c2) + (c5==c3) + (c5==c4);

    
    if ((s1==2)||(s2==2)||(s3==2)||(s4==2)||(s5==2)) {
        pair = 1;
    }
    if ((s1==3)||(s2==3)||(s3==3)||(s4==3)||(s5==3)) {
        triple = 1;
    }

    if (pair==1 && triple==1) {
        printf("Full House\n");
    } else {
        printf("Not a Full House\n");
    }

    return 0;
}

