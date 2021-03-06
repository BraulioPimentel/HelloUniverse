// MainFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "log.h"

const int POSITION = 10;
const int ALREADY_CONPUTED = 3;

using namespace std;

//exercise 4 function: Finds the tenth fibonacci number using both local and global variables
void print_tenth_fibonacci() {
    int n_1 = 1;
    int n_2 = 0;
    int current = n_1 + n_2;

    for (int i = ALREADY_CONPUTED; i < POSITION; ++i) {
        n_2 = n_1;
        n_1 = current;
        current = n_1 + n_2;
    }
    cout << current << endl;
}

int main()
{
    //Hello World!
    /*
    std::cout << "Hello World!\n\n";
    */

    //exercise 2: Count of 11 values
    /*
    * 
    unsigned count = 0;
    for (unsigned x = 1; x <= 100; x++) {
        if (x % 11 == 0) {
            count++;
        }
        else if (x < 30) {
            std::cout << x << " is not a value " << std::endl;
        }
    }
    std::cout << "Total Count:" << count << std::endl;
    */


    //activity 1: Factors of 7 from 1-100
    /*
    unsigned i = 1;

    for (; i < 100; ) {
        if (i % 7 == 0) {
            cout << i << " is a factor of 7" << endl;

        }
        i++;
    }
    */

    //activty 2: Defining a bi-dimension array and initalizing it's elements
    /*
    int intArray[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            intArray[i][j] = 1;
            cout <<"The value of intArray at value of " << i+1<< " and " << j+1 << " is " << intArray[i][j] << endl;
        }

    }
    */

    //exercise 3: calling a function from main()
    //log();

    //exercise 4: Using local and global variables in a fibonacci sequence
    cout << "Computing the 10th fibonacci number" << endl;
    print_tenth_fibonacci();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
