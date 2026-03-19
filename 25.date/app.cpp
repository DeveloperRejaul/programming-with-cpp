#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // Get the timestamp for the current date and time
    time_t timestamp3;
    time(&timestamp3);

    // Display the date and time represented by the timestamp
    cout << ctime(&timestamp3) << endl;

    time_t timestamp2 = time(NULL);
    cout << timestamp2 << endl;


    // **Create a timestamp using the mktime() function**
    struct tm datetime;
    time_t timestamp;

    datetime.tm_year = 2023 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1; // Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = -1;
    timestamp = mktime(&datetime);
    cout << ctime(&timestamp);

    return 0;
}
