#include <stdio.h>
#include <string.h>

int main() {
    int dailylimit = 5000;
    char allowcountry[3][15] = {"pakistan", "UAE", "Qatar"};
    int Amount, no_of_transactions;
    char country[15];
    int allowed = 0; // flag for allowed country

    printf("Enter Amount of Spending: ");
    scanf("%d", &Amount);

    printf("How many Transactions you have done before within an hour? ");
    scanf("%d", &no_of_transactions);

    printf("Transaction in which country: ");
    scanf("%s", country);

    // Check if country is in allowed list
    for (int i = 0; i < 3; i++) {
        if (strcmp(country, allowcountry[i]) == 0) {
            allowed = 1;
            break;
        }
    }

    if (Amount < dailylimit) {
        if (no_of_transactions <= 3) {
            if (allowed) {
                printf("Secure Transaction\n");
            } else {
                printf("Transaction suspicious\n");
                 printf("flagged, need fraud review.");
            }
        } else {
            printf("Transaction suspicious\n");
             printf("flagged, need fraud review.");
        }
    } else {
        printf("Transaction suspicious\n");
        printf("flagged, need fraud review.");
    }      

    return 0;
}


