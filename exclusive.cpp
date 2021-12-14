#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

/** Exclusive allows the user to input an odd amount of positive integers separated by spaces and
 *  on a single line. The inputted integer that only appears once is printed.
 */
int main()
{

    string raw = ""; //intialization of variables
    stringstream ss;
    stringstream l;
    int length = 0; //length is initially set to zero
    cout << "Enter integers: "; //console requests integers from user
    getline(cin, raw); //input is recorded from user
    l << raw; //used to determine length
    ss << raw; //used to search for int values

    string temp;
    int found;
    while (!l.eof()) { //gets length of arr by counting number of ints
        l >> temp;
        if (stringstream(temp) >> found) {
            if (found < 0) {
                cout << "All integers must be positive!" << endl;
                return 0;
            } // if
            length++;
        } // if
        temp = "";
    } // while

    int *value = new int[length]; //initialization of array that contains int values
    int pos = 0;
    while (!ss.eof()) { //puts values into array
        ss >> temp;
        if (stringstream(temp) >> found) {
            value[pos] = found;
            pos++;
        } // if
        temp = "";
    } // while

    if ((length % 2) != 1) { //ends program if even number of integers
        cout << "You must enter an odd number of integers!" << endl;
        return 0;
    } // if

    for (int i = 0; i < length; i++) { //searches for duplicate values in array
        int counter = 0;
        for (int j = 0; j < length; j++) {
            if (value[i] == value[j]) {
                counter++;
            } // if
        } // for
        if (counter < 2) {
            cout << "Exclusive: " << value[i] << endl; //prints when exclusive value is found
        } // if
    } // for
    return 0;
} // main
