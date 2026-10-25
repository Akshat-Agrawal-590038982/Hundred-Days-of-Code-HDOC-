/* Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using 
fgetc() and fputc() */


#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];

    // Prompt user for source and destination filenames
    printf("Enter the source filename: ");
    scanf("%s", sourceFile);
    printf("Enter the destination filename: ");
    scanf("%s", destFile);

    FILE *source = fopen(sourceFile, "r"); // Open source file in read mode
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1; // Exit if the source file cannot be opened
    }

    FILE *dest = fopen(destFile, "w"); // Open destination file in write mode
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(source); // Close the source file before exiting
        return 1; // Exit if the destination file cannot be opened
    }

    char ch;
    // Read each character from the source file and write it to the destination file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source); // Close the source file
    fclose(dest);   // Close the destination file

    printf("Content copied from %s to %s successfully.\n", sourceFile, destFile);
    
    return 0; // Successful execution
}