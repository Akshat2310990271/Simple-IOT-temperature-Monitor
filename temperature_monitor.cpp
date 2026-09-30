#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> readings = {24.5, 26.0, 31.2, 29.4, 33.1};
    const float HIGH_THRESHOLD = 30.0;

    cout << "IoT Temperature Monitor\n";
    for (float temperature : readings) {
        cout << "Temperature: " << temperature << " C";
        if (temperature >= HIGH_THRESHOLD)
            cout << " -> ALERT: High temperature";
        else
            cout << " -> Status: Normal";
        cout << endl;
    }
    return 0;
}
