#include <iostream>
#include <cstdlib>

using namespace std;

/** Endtime evaluates the sum of the user inputted start time and duration.
 *  This value is correctly returned as a military time value without a colon.
 */
int main()
{
    int time, dur, rawTime; //initialization of variables
    cout << "Enter in a start time: "; //console requests start time
    cin >> time; //start time recorded
    cout << "Enter in a duration: "; //console requests duration
    cin >> dur; //duration recorded
    rawTime = time + dur;

    if (((rawTime / 10) % 10) >= 6) { //adds the minutes past 59 to the next hour
        rawTime += 40;
    } // if
    if ((rawTime / 100) >= 24) { //adds hours past 24 to the next day
        rawTime -= 2400;
    } // if

    cout << "End time is: " << rawTime << endl; //military style time is printed
    return 0;
} // main
