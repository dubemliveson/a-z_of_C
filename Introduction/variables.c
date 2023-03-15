#include <stdio.h>

int main() {

    // variables are being declared
    int age = 25;
    float num = 32.4;
    double salary = 539.0;
    char alphabet = 'c';

    // variables are printed using their format specifiers

    /** %f - float
     * %d - int 
     * %lf - double 
     * %c - char 
     */

	// assign new variable to age
	age = 31;

	// declare new variable num2
	float num2;

	// assign value stored in num2 to num
	num2 = num; 
	
    // print the data types
    printf("%d\n", age);
    printf("%lf\n", salary);
    printf("%f\n", num);
    printf("%c\n", alphabet);


    return 0;
}

