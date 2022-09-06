#include <iostream>

using namespace std;

int main()

{

    int max, n;
    cout << "Enter the Maximum occupancy for the room. ";
    cin >> max;
    cout << "Enter the number of occupants of the room. ";
    cin >> n;
    if(n < max)
        cout << "The number of occupants does not exceed the legal maximum. " << n-max << "more people may attend." << endl;
    else
        cout << "ATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES x PERSONS TO LEAVE THE ROOM IMMEDIATELY. " << max-n << " people should be excluded." << endl;
    return 0;

}