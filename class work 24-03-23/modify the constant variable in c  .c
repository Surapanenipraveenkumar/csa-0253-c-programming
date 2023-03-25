#include <stdio.h>

int main () {
    const int a =6;
    int b = 79;
    const int *p = &a;
    
    // Prints 6 as the value of a, which is a constant variable,
    // cannot be directly modified.
    printf("The value of a before modification is: %d\n", a);
    
    // Modify the value of a using a pointer to a non-constant variable.
    p = &b;
    
    // Prints 79 as the value of a, which is a constant variable,
    // has been indirectly modified using a pointer.
    printf("The value of a after modification is: %d\n", *p);
    
    return 0;
}
