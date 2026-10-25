/* Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to 
the file using fprintf(). After writing, display a message confirming that 
the data was successfully saved */


#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w"); // Open the file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    char name[100];
    int age;

    // Take user input for name and age
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read name with spaces
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write the name and age to the file
    fprintf(file, "Name: %sAge: %d\n", name, age);

    fclose(file); // Close the file

    printf("Data successfully saved to info.txt\n"); // Confirmation message

    return 0; // Successful execution
}