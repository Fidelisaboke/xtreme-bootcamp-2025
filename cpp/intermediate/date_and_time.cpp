/** Date and Time in C++
- https://www.w3schools.com/cpp/cpp_date.asp
 */

#include <iostream>
#include <ctime> // The ctime library for working with dates and times

int main(){
    time_t timestamp; // Timestamp variable
    struct tm datetime; // Datetime struct

    // Retrieve the current date and time, storing it in 'timestamp'
    time(&timestamp);

    // Display the current time in a human-readable format using ctime()
    std::cout << "Current Date and Time: " << ctime(&timestamp);


    /* Creating a timestamp */
    time_t my_timestamp; // timestamp variable to store the timestamp
    struct tm my_datetime; // Datetime struct used to create the timestamp

    // Build the datetime struct
    my_datetime.tm_year = 2025 - 1900; // No. of years since 1900
    my_datetime.tm_mon = 5; // No. of months since January
    my_datetime.tm_mday = 4;
    my_datetime.tm_hour = 14;
    my_datetime.tm_min = 30;
    my_datetime.tm_sec = 20;

    // Daylight Savings specification -> (-1 uses computer timezone)
    my_datetime.tm_isdst = -1;

    // Make the timestamp from the datetime
    my_timestamp = mktime(&my_datetime);
    std::cout << ctime(&my_timestamp);

    /* Retrieving datetimes form timestamps */
    std::cout << "--- Datetimes from Timestamps ---:";
    time_t timestamp2 = time(&timestamp);
    struct tm datetime2 = *localtime(&timestamp2); // Dereference to create a copy
    std::cout << "\nHour extracted: " << datetime2.tm_hour << "\n";

    /* Displaying dates from a datetime */
    std::cout << "Date extracted: " << asctime(&datetime2);

    /* Displaying date and time using formatted strings */
    timestamp = time(NULL);
    datetime = *localtime(&timestamp);
    char output[50];

    strftime(output, 50, "%a, %e %B %Y", &datetime);
    std::cout << output << "\n";

    strftime(output, 50, "%d-%m-%Y %H:%M:%S %p", &datetime);
    std::cout << output << "\n";

    /* Calculating time difference - using difftime() */
    int time_diff = difftime(timestamp, my_timestamp);
    std::cout << time_diff << " seconds since the time in my_timestamp\n";

    /* Measuring how long a section takes to run */
    clock_t before_loop = clock();
    int a = 0;
    for (int i = 0; i < 10000; i++){
        a +=1;
    }
    clock_t duration = clock() - before_loop;
    std::cout << "\nDuration of for loop: " << (float)duration/CLOCKS_PER_SEC << " seconds\n";

    return 0;
}