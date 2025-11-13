#include <stdio.h>
// preprocessor director, include standard input output library
// header file

int main() {

    printf("cheese");

    // return 0 means program ran successfully
    return 0;
}

```txt
============================================================
 BASIC / PRIMITIVE TYPES
============================================================

-- Integer Types (Signed)
char                    // 1 byte, smallest integer type
short                   // 2 bytes, small integer
int                     // 4 bytes, standard integer
long                    // 4 or 8 bytes (platform-dependent)
long long               // 8 bytes, guaranteed >= 64 bits

-- Integer Types (Unsigned)
unsigned char           // 1 byte, 0–255
unsigned short          // 2 bytes
unsigned int            // 4 bytes
unsigned long           // 4 or 8 bytes
unsigned long long      // 8 bytes

============================================================
 FLOATING-POINT TYPES
============================================================

float                   // 4 bytes, single-precision
double                  // 8 bytes, double-precision
long double             // 10–16 bytes, extended precision

============================================================
 CHARACTER & BOOLEAN TYPES
============================================================

char                    // 1 byte, character or small int
signed char             // guaranteed signed 1 byte
unsigned char           // guaranteed unsigned 1 byte
_Bool                   // C99 boolean (0 or 1)
bool                    // requires <stdbool.h>

============================================================
 POINTER TYPES
============================================================

int*                    // pointer to int (8 bytes on 64-bit)
char*                   // pointer to char
void*                   // generic pointer
float*                  // pointer to float
double*                 // pointer to double
// NOTE: All pointers are the same size on a given architecture.

============================================================
 DERIVED TYPES (BUILT FROM PRIMITIVES)
============================================================

-- Arrays
int arr[10];            // fixed-size array of 10 ints
char name[20];          // array of 20 chars

-- Structures
struct MyStruct {
    int x;
    float y;
};                      // custom grouping of variables

-- Unions
union MyUnion {
    int x;
    float y;
};                      // memory shared by all members

-- Enumerations
enum Color {
    RED,
    GREEN,
    BLUE
};                      // usually stored as int

============================================================
 FUNCTION TYPES
============================================================

int func(int x);        // function returning int
int (*func_ptr)(int);   // pointer to function (8 bytes on 64-bit)

============================================================
 TYPE MODIFIERS
============================================================

const                   // value cannot be modified
volatile                // value may change externally (e.g., hardware)
static                  // persists for lifetime of program or internal linkage
extern                  // variable declared elsewhere
signed                  // explicitly signed
unsigned                // explicitly unsigned
short                   // reduces width
long                    // increases width

============================================================
 SUMMARY
============================================================

Primitive:    char, int, float, double, long, short
Unsigned:     unsigned char/int/long/long long
Boolean:      _Bool, bool
Pointer:      T* (all 8 bytes on 64-bit)
Array:        T array[n]
Struct:       struct { ... }
Union:        union { ... }
Enum:         enum { ... }
Function:     returnType func(...), function pointers
Modifiers:    const, volatile, static, extern, signed, unsigned, long, short
```

int main() {
    float gpa = 2.5;
    printf("gpa is: %f\n", gpa);
    double pi = 3.14159265358979;
    // lf = long float .15 is we want to print 15 digits
    printf("the value of pi: %.15lf\n", pi)

    // in c string is an array of chars
    char name[] = "Bobby";
    printf("hi %c\n", name);

    bool isOnline = true;
    // returns 1 for true, 0 for false
    printf("Bobby is: %d", isOnline);

    // to use bool must use
    // #include <stdbool.h>

    if (isOnline)
    {
        printf("you are Online");
    }
    else
    {
        printf("you are Offline");
    }
}