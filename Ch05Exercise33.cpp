#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cout << "Enter the time it takes to complete the first dish: ";
    cin >> a;
    cout << "Enter the extra time for the next dish: ";
    cin >> b;
    cout << "How much time do you have? ";
    cin >> t;

    int totalTime = 0;
    int dishes = 0;
    int currentTime = a;

    while (totalTime + currentTime <= t) {
        totalTime += currentTime;
        dishes++;
        currentTime += b;
    }

    cout << dishes << endl;

    return 0;
}
