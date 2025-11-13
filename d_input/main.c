#include <stdio.h>
#include <string.h>

int main() {
    // printf("hello");

    int age=0;
    float gpa=0.0f;
    // \\0 null terminator
    char grade='\0';
    char name[30]= "";

    // scanf to get input
    // & address of operator
    printf("enter your age: ");
    scanf("%d", &age)
    printf("enter your gpa: ");

    scanf("%f", &gpa);
    // must clear \n char or skip over it before accepting new input 
    printf("enter your grade: ");
    // can also use getchar() to clear input buffer
    scanf(" %c", &grade);
    printf("enter your name: ");
    // for strings its better to use fgets
    // var, size, input
    // if we don't know size can use sizeof(var)
    fgets(name, 30, stdin);
    // there is going to be a \n at the end here
    // by accessing last position of name char array
    // we change it to null terminator instead
    name[strlen(name) - 1] = '\0'



    // if we try to print these without declaring them, we get undefined behavior
    // i.e random
    printf("%d", age);
    printf("%f", gpa);
    printf("%c", grade);
    printf("%s", name);
    return 0;
}