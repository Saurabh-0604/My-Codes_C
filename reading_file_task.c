#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("input.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n\n");

    // Read and print characters until end of file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
