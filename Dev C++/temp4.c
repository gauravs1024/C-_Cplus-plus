#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a file pointer
    FILE *fPointer;

    // Open the file in read mode
    fPointer = fopen("newcity.txt", "w");
   
    // Check if the file opened successfully
    if (fPointer == NULL ) {
        printf("Error opening the file.\n");
        return 1; // Return an error code
    }
    else 
    printf("hello");
    
     // Close the file
    fclose(fPointer);

    return 0; // Return 0 to indicate successful execution
}


