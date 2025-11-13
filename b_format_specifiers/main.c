// start with %
// followed by character that specifies datatype
//  with optional modifiers (width, precision, flags)
// control how data is displayed or formatted

// decimal %d
// float %f
// long float (or doubles) %lf
// char %c
// string %s

int main() {
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    // number between % and letter signifies number of chars/ints to display
    //left justified
    // %-3d
    // leading 0's
    // %03d
    // signed
    // %+3d
    // precision
    // %.2f
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
}