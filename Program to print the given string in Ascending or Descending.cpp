#include <stdio.h>
#include <string.h>
#define MAX_NAMES 10
#define MAX_NAME_LENGTH 50
int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int num_names,i,j;
    char order;
    printf("Enter the number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &num_names);
    printf("Enter the names:\n");
    for (i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }
    printf("Sort order (A/D): ");
    scanf(" %c", &order);
    for (i = 0; i < num_names - 1; i++) {
        for (j = 0; j < num_names - i - 1; j++) {
            int cmp = strcmp(names[j], names[j+1]);
            if ((order == 'A' && cmp > 0) || (order == 'D' && cmp < 0)) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    printf("\nSorted names:\n");
    for (i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }
    return 0;

}

