#include<stdio.h>

// structure declaration
struct address {
 char city[20];
 char state[20];
};

struct person {
 char name[30];
 int age;
 struct address addr;
};

// main function
int main() {
 struct person p1;
 printf("Enter name: ");
 scanf("%s", &p1.name);
 printf("Enter age: ");
 scanf("%d", &p1.age);
 printf("Enter city: ");
 scanf("%s", &p1.addr.city);
 printf("Enter state: ");
 scanf("%s", &p1.addr.state);
 printf("\nName: %s\nAge: %d\nCity: %s\nState: %s", 
        p1.name, p1.age, p1.addr.city, p1.addr.state);
 return 0;
}
