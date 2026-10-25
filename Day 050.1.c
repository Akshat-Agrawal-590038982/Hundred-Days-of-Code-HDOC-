/* Change the date format from dd/04/yyyy to dd-Apr-yyyy */


#include <stdio.h>

int main() {
    char date[] = "15/04/2024";
    char month[4]; // To store the month abbreviation
    int day, year;

    // Extract day, month, and year from the input string
    sscanf(date, "%d/%d/%d", &day, &month[0], &year);

    // Convert month number to month abbreviation
    switch (month[0]) {
        case 1:  sprintf(month, "Jan"); break;
        case 2:  sprintf(month, "Feb"); break;
        case 3:  sprintf(month, "Mar"); break;
        case 4:  sprintf(month, "Apr"); break;
        case 5:  sprintf(month, "May"); break;
        case 6:  sprintf(month, "Jun"); break;
        case 7:  sprintf(month, "Jul"); break;
        case 8:  sprintf(month, "Aug"); break;
        case 9:  sprintf(month, "Sep"); break;
        case 10: sprintf(month, "Oct"); break;
        case 11: sprintf(month, "Nov"); break;
        case 12: sprintf(month, "Dec"); break;
        default: sprintf(month, "???"); break; // Invalid month
    }

    // Print the date in the new format
    printf("Formatted date: %02d-%s-%04d\n", day, month, year);

    return 0;
}