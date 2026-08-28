#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include <iomanip>

using namespace std;

int main() {
    int alarmHour, alarmMinute;
    char colon;

    cout << "Set alarm time (HH:MM): ";
    cin >> alarmHour >> colon >> alarmMinute;

    cout << "Alarm is set for " << setfill('0') << setw(2) << alarmHour << ":"
         << setfill('0') << setw(2) << alarmMinute << ".\n";
    cout << "Waiting for alarm...\n";

    while (true) {
        time_t now = time(0);
        tm* currentTime = localtime(&now);

        cout << "Current time: "
             << setfill('0') << setw(2) << currentTime->tm_hour << ":"
             << setfill('0') << setw(2) << currentTime->tm_min << ":"
             << setfill('0') << setw(2) << currentTime->tm_sec << "\r";
        cout.flush();

        if (currentTime->tm_hour == alarmHour && currentTime->tm_min == alarmMinute) {
            cout << "\nWAKE UP! WAKE UP! ALARM RINGING!\n";
            break;
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
