#include <stdio.h>
#include <time.h>
#include <unistd.h> // Include the <unistd.h> header for sleep function

int main() {
    while (1) { // Infinite loop to keep updating the time
        // Get current time
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);

        // Print the digital clock
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

        // Wait for one second (you can adjust this value for faster or slower updates)
        sleep(1);
    }

    return 0;
}
