#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *local_time;
    char timestamp[64];

    // Get the current time
    current_time = time(NULL);

    // Convert to local time
    local_time = localtime(&current_time);

    // Format the timestamp with timezone in ISO 8601 format
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%S%z", local_time);

    // Print the timestamp
    printf("Current Timestamp with Timezone: %s\n", timestamp);

    return 0;
}
