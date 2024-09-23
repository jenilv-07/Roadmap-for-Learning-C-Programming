In C, variables are used to store data of different types. Here's a list of common variable types in C, along with examples of how to declare them:

### 1. **Basic Data Types**
#### a. **Integer (`int`)**
Stores whole numbers (positive, negative, or zero).
```c
int age = 25;
```

#### b. **Floating-point (`float`, `double`)**
Used for decimal numbers.
```c
float price = 10.99;       // Single-precision floating point
double largeNumber = 99.99; // Double-precision floating point
```

#### c. **Character (`char`)**
Used to store a single character.
```c
char grade = 'A';
```

### 2. **Derived Data Types**
#### a. **Array**
Stores a collection of elements of the same type.
```c
int numbers[5] = {1, 2, 3, 4, 5};   // Array of integers
char name[10] = "John";             // Array of characters (string)
```

#### b. **Pointer**
Stores the address of a variable.
```c
int *p;
int x = 10;
p = &x;  // Pointer p now stores the address of x
```

#### c. **Structure (`struct`)**
Combines multiple variables of different types.
```c
struct Person {
    char name[50];
    int age;
    float height;
};

struct Person person1 = {"John", 30, 5.9};  // Example of a structure
```

### 3. **User-Defined Types**
#### a. **Typedef**
Creates a new name for an existing data type.
```c
typedef int Integer;
Integer num = 5;  // 'Integer' is now an alias for 'int'
```

#### b. **Enumerated (`enum`)**
Defines a set of named integer constants.
```c
enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
enum Days today = MONDAY;  // today is of type enum Days
```

### 4. **Modifiers**
C also provides data type modifiers to alter the properties of data types.

#### a. **Signed/Unsigned**
- **Signed**: Can store both negative and positive values.
- **Unsigned**: Can store only positive values (increases range).
```c
unsigned int uAge = 30;   // Can only store positive integers
signed int sAge = -30;    // Can store both positive and negative integers
```

#### b. **Short/Long**
Changes the size of the data type (especially useful for `int` and `double`).
```c
short int shortNum = 32767;    // Stores smaller range of integers
long int largeNum = 100000L;   // Stores larger range of integers
long double bigDecimal = 2.718281828459;  // Higher precision float
```

### 5. **Void (`void`)**
Indicates no value (used with functions to specify no return value or no arguments).
```c
void sayHello() {
    printf("Hello!\n");
}
```

### Summary of C Variables:
| **Type**         | **Keyword**      | **Example**                |
|------------------|------------------|----------------------------|
| Integer          | `int`            | `int count = 10;`           |
| Floating-point   | `float`, `double`| `float pi = 3.14;`          |
| Character        | `char`           | `char letter = 'A';`        |
| Pointer          | `*`              | `int *p = &num;`            |
| Array            | `[]`             | `int arr[5] = {1,2,3,4,5};`|
| Structure        | `struct`         | `struct { int x; } obj;`    |
| Enumeration      | `enum`           | `enum Colors {RED, BLUE};`  |
| Typedef          | `typedef`        | `typedef int Integer;`      |
| Signed           | `signed`         | `signed int num = -5;`      |
| Unsigned         | `unsigned`       | `unsigned int unum = 5;`    |
| Short            | `short`          | `short int shortNum = 32767;`|
| Long             | `long`           | `long int bigNum = 100000L;`|
| Void             | `void`           | `void func();`              |

Each of these types can be combined with modifiers (like `signed`, `unsigned`, `long`, `short`) to adjust the size or behavior of the data being stored.