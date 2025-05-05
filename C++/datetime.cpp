#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //The time() function gives us the timestamp representing the current date and time
    time_t timestamp;
    time(&timestamp);
    cout<<ctime(&timestamp);
    //Date types time_t for the time stumps struct tm for datetime structures
    //timestamps represent a moment in time as a single number, easy for computer calculations
    //structures in datetime
    //tm_sec, tm_min, tm_hour, tm_mday, tm_mon, tm_year, tm_wday, tm_day, tm_isdst postitive when d
    //TIme is represented in 24 hour format 
    //create a timetup using the mktime() function
    struct tm datetime;
    datetime.tm_year = 2025;
    datetime.tm_sec = 2;
    timestamp = mktime(&datetime);
    cout<<ctime(&timestamp)<<endl;
    return 0;
}