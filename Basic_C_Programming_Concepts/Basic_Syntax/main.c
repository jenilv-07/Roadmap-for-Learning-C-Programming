#include <stdio.h>

// Enum definition
enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

// Structure definition
struct Person {
    char name[50];      // Character array (string)
    int age;            // Integer
    float height;       // Float
};

// Typedef example
typedef unsigned long int ULong;

int main() {
    // Basic data types
    int a = 10;                  // Integer
    float b = 4.5f;              // Float
    double c = 99.123456;        // Double
    char letter = 'A';           // Character

    // Modifiers
    unsigned int uNum = 100;     // Unsigned integer
    signed int sNum = -50;       // Signed integer
    short int shortNum = 32767;  // Short integer
    long int longNum = 1000000L; // Long integer

    // Array
    int arr[5] = {1, 2, 3, 4, 5};

    // Pointer
    int *p;
    p = &a;  // p now holds the address of a

    // Structure
    struct Person person1 = {"John Doe", 30, 5.9};

    // Enum
    enum Days today = MONDAY;

    // Typedef
    ULong largeNumber = 100000UL;  // Using typedef for unsigned long int

    // Printing the results
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Double: %.6lf\n", c);
    printf("Character: %c\n", letter);

    printf("Unsigned Integer: %u\n", uNum);
    printf("Signed Integer: %d\n", sNum);
    printf("Short Integer: %d\n", shortNum);
    printf("Long Integer: %ld\n", longNum);

    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Pointer to 'a': %p, Value of 'a': %d\n", p, *p);

    printf("Person Name: %s, Age: %d, Height: %.1f\n", person1.name, person1.age, person1.height);

    printf("Today is: %d (MONDAY is 1)\n", today);

    printf("Typedef unsigned long int value: %lu\n", largeNumber);

    return 0;
}
