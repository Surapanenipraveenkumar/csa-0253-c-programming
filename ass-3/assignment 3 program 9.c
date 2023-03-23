//What will be output of following c program?
#include <stdio.h>
#include <string.h>

typedef struct student {
    char name1[6];
    char name2[6];
    double marks;
} Student;

int main() {
    Student s1 = {"rohit", "kumar", 87.43};
    char *p = NULL;

    // Search for the character 'u' within the name1 array
    p = strchr(s1.name1, 'u');
    if (p != NULL) {
        printf("Found 'u' in name1: %s\n", p);
    } else {
        printf("Did not find 'u' in name1\n");
    }

    // Search for the string "ku" within the name2 array
    p = strstr(s1.name2, "ku");
    if (p != NULL) {
        printf("Found 'ku' in name2: %s\n", p);
    } else {
        printf("Did not find 'ku' in name2\n");
    }

    return 0;
}
