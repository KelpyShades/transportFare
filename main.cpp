#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    // Constants and Arrays
    const float defaultFare = 2000.00;
    float distances[] = {10.00, 40.00, 150.00, 1000.00};  // Upper limits of distance ranges
    float fares[] = {defaultFare, 2100.00, 2175.00, 2050.00}; // Corresponding fares

    //Variables
    float distance;
    float extra;
    float finalFare;
    cout << "...Transport Fare..." << endl;

    //Input
    while (true) {
        cout << "\nEnter Distance Travelled (in kilometers): ";
        cin >> distance;
        cout << "Please Wait..." << endl;
        this_thread::sleep_for(chrono::seconds(5));

        //Conditions
        if (distance > 0 && distance <= distances[0]) {
            finalFare = fares[0];
            cout << "\nTransport Fare For A Distance Of " << distance << " KiloMeters Is: GH Cedis " << fixed << setprecision(2) << finalFare << endl;
            break;
        } else if (distance <= distances[1]) {
            extra = 100.00;
            finalFare = fares[1];
            cout << "\nTransport Fare For A Distance Of " << distance << " KiloMeters Is: GH Cedis " << fixed << setprecision(2) << finalFare << endl;
            break;
        } else if (distance <= distances[2]) {
            extra = 175.00;
            finalFare = fares[2];
            cout << "\nTransport Fare For A Distance Of " << distance << " KiloMeters Is: GH Cedis " << fixed << setprecision(2) << finalFare << endl;
            break;
        } else if (distance <= distances[3]) {
            extra = 50.00;
            finalFare = fares[3];
            cout << "\nTransport Fare For A Distance Of " << distance << " KiloMeters Is: GH Cedis " << fixed << setprecision(2) << finalFare << endl;
            break;
        } else {
            cout << "\nEnter A Valid Amount. Please Try Again." << endl;
            continue;
        }
    }

    return 0;
}
