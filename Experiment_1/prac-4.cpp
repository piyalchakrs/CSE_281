#include <iostream>

using namespace std;

struct Distance {
    int feet;
    int inches;
};

Distance addDistances(const Distance &d1, const Distance &d2) {
    Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }

    return sum;
}

int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance (feet &inches): ";
    cin >> d1.feet >> d1.inches;

    cout << "Enter second distance (feet & inches): ";
    cin >> d2.feet >> d2.inches;

    sum = addDistances(d1, d2);

    cout << "\nSum of distances = " << sum.feet << " feet " << sum.inches << " inches";

    return 0;
}
