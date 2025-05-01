#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char message[100];

    printf("Enter a message to save in the file: ");
    fgets(message, sizeof(message), stdin);
    printf("%s", message);

    file = fopen("data.txt", "w");

    fputs(message, file);
    fclose(file);

    file = fopen("data.txt", "r");

    printf("\nReading from file:\n");
    fgets(message, sizeof(message), file);
    printf("%s", message);
    fclose(file);

    return 0;
}
