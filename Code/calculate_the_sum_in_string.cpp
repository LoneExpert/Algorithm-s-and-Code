#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;

int main()
{
    char str[] = "Apple:@45,Banana:@55,Mango:@34";
    char *ptr;
    ptr = strtok(str,",");

    int sum=0;
    while(ptr!=NULL){
        char * colon = strchr(ptr,':');
        if(colon!=NULL){
            *colon = '\0';
            int n = atoi(colon+4);
            sum+=n;
        }
        ptr = strtok(NULL,",");
    }
    cout<<sum<<endl;

    return 0;
}


/*
Certainly! Here's a breakdown of the code step by step:

1. `#include <iostream>`: This includes the standard input/output library for handling console input and output.

2. `#include <cstring>`: This includes the C string manipulation library for functions like `strtok` and `strchr`.

3. `#include <cstdlib>`: This includes the C standard library for functions like `atoi` (string to integer conversion).

4. `int main()`: This is the starting point of the program, where execution begins.

5. `char str[] = "apple:40, banana:20, mango:20";`: This declares a character array (`char` array) named `str` containing the input string.

6. `char* token = strtok(str, ", ");`: The `strtok` function is used to tokenize the input string `str`. It takes two arguments: the first is the string to tokenize (`str` in this case), and the second is a string of delimiters (in this case, a comma and a space). It returns a pointer to the first token found.

7. `int sum = 0;`: This initializes a variable `sum` to store the sum of numbers extracted from the input.

8. `while (token != nullptr) {`: This initiates a loop that iterates through each token until there are no more tokens left.

9. `char* colon = strchr(token, ':');`: The `strchr` function searches for the first occurrence of a colon ':' character in the `token`. If found, it returns a pointer to the colon character.

10. `if (colon != nullptr) {`: This condition checks if a colon character was found in the `token`.

11. `*colon = '\0';`: This replaces the colon character with a null terminator '\0', effectively splitting the `token` into two parts: the label part and the number part.

12. `int n = atoi(colon + 1);`: This uses the `atoi` function to convert the substring after the colon into an integer. The `colon + 1` is used to skip the colon and point to the number part.

13. `sum += n;`: This adds the extracted integer `n` to the `sum`.

14. `token = strtok(nullptr, ", ");`: This continues tokenizing the input string using the same delimiters. Passing `nullptr` as the first argument tells `strtok` to continue tokenizing from where it left off.

15. `std::cout << "Sum of the numbers is: " << sum << std::endl;`: Finally, this line prints the calculated sum of numbers.

16. `return 0;`: The program ends by returning 0 to indicate successful execution.

The code essentially tokenizes the input string, splits each token into a label and a number, converts the number to an integer, and calculates the sum of these numbers.
*/