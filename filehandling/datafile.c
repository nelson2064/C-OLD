// #include <stdio.h>
// #include <conio.h>





// void main(){


// FILE *fptr;



// fptr = fopen("hello.txt","r");
// char msg;

// fscanf(fptr , "%s" , &msg);
// printf("%s",msg);
// fclose(fptr);
// }
#include <stdio.h>

int main() {
    FILE *fptr;
    char msg[100]; // Define an array to store the string

    fptr = fopen("hello.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1; // Return an error code
    }

    fscanf(fptr, "%s", &msg);
    printf("%s", msg);

    fclose(fptr);

    return 0; // Return success
}
