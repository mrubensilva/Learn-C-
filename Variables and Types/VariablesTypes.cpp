#include <iostream> /* Includes the standard input/output library */
using namespace std; /* Introduces entities from the 'std' namespace into the program */

int main() { /* Defines the main function */
    int a = 3; /* The integer 3 assigned to variable 'a' */
    float b = 4.5; /* The floating point number 4.5 assigned to variable 'b' */
    double c = 5.25; /* The precise floating point ('double') number assigned to variable 'c' */
    double sum; /* The variable 'sum' assigned a 'double' data to prevent data loss after adding together 'a,' 'b,' and 'c' */

    sum = a + b + c; /* Assigning the 'sum' variable a value equal to the summation of 'a,' 'b,' and 'c' */

    cout << "The sum of a, b, and c is " << sum << endl; /* Prints to screen a concatenation of a string and 'sum,' then flushes the buffer */
    return 0; /* Return 0 to indicate the program was successful */
}
