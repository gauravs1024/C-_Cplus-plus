#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a file pointer
    FILE *filePointer;

    // Open the file in read mode
    filePointer = fopen("city.txt", "r");
   
    // Check if the file opened successfully
    if (filePointer == NULL ) {
        printf("Error opening the file.\n");
        return 1; // Return an error code
    }

    // Read the file character by character and print it to the console
    char character;
    while ((character = fgetc(filePointer)) != EOF) {
    	if(character==':')
        printf("\n");	
        
        else
       
         printf("%c",character);
    }

    // Close the file
    fclose(filePointer);

    return 0; // Return 0 to indicate successful execution
}

