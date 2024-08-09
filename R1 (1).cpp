//A small program in C++ to determine how many batteries are to be connected in series to get a desired output voltage.

//Hey there! Myself Mragank Sharma and my roll no. is B231095EE.

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    //Calculating the sum of digits in my roll no. to find the voltage of a single battery.
    string roll_no = "B231095EE";
    int single = 0;    
    for (char p : roll_no)
    {
        if (isdigit(p))
        {
            single += p - '0';
        }
    }
    cout << "The voltage of a single battery is " << single << " volts." << endl;

    //Receiving the input of desired voltage from the user.
    int desired;                                                                               
    cout << "Enter your desired output voltage (in volts) here!" << endl;
    cin >> desired;

    //Calculating the no. of batteries required to satisfy the desired voltage.
    if (desired % single == 0)
    {
        cout << "The no. of batteries to be connected in series to get the desired voltage are " << desired/single << "." << endl;
    }
    if (desired < single)
    {
        cout << "Please enter the valid input. Your input should be greater than 20." << endl;
    }
    if (desired % single != 0 && desired > single)
    {
        cout << "The no. of batteries to be connected in series to satisfy the required voltage are " << desired/single + 1 << "." << endl;
    }
    system("pause");
    return 0;
}