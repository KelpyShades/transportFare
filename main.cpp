#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    //Variables
    const float defaultFare = 2000.00;
    float distance;
    float extra;
    float finalFare;
    cout << "...Transport Fare..." << endl;

    //Input
    //While loop
    while (true) {
    cout << "\nEnter Distance Travelled (in kilometers): ";
    cin >>distance;
    cout <<"Please Wait..."<< endl;
    this_thread::sleep_for(chrono::seconds(5));//Delay

    //Conditions
    if (distance > 0 && distance <= 10.00) {
        cout << "\nTransport Fare For A Distance Of "<<distance<<" KiloMeters Is: GH Cedis "<<fixed<<setprecision(2)<<defaultFare<< endl;
        break;
    }else if (distance > 10.00 && distance <= 40.00) {
        extra = 100.00;
        finalFare = extra + defaultFare;
        cout << "\nTransport Fare For A Distance Of "<<distance<<" KiloMeters Is: GH Cedis "<<fixed<<setprecision(2)<<finalFare<< endl;
        break;
    }else if (distance > 40.00 && distance <= 150.00) {
        extra = 175.00;
        finalFare = extra + defaultFare;
        cout << "\nTransport Fare For A Distance Of "<<distance<<" KiloMeters Is: GH Cedis "<<fixed<<setprecision(2)<<finalFare<< endl;
        break;
    }else if (distance > 150.00) {
        extra = 50.00;
        finalFare = extra + defaultFare;
        cout << "\nTransport Fare For A Distance Of "<<distance<<" KiloMeters Is: GH Cedis "<<fixed<<setprecision(2)<<finalFare<< endl;
        break;
    }else {
        cout << "\nEnter A Valid Amount Please Try Again" << endl;
        continue;
    }
    }
    return 0;
}
