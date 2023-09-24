// #include <stdio.h>
// #include <conio.h>



// // void main(){


// // FILE *fptr  = fopen("filehand.txt","r");

// // // char name;
// // // for(int i = 0 ; i<5 ; i++){
// // //     scanf("%c",&name);
// // // fputc(name,fptr);
// // // }

// // char name;

// // while((name = fgetc(fptr)) != EOF){
// //    printf("%c",name);
// // }

// // fclose(fptr);


// // }



// void main(){


// FILE *fptr  = fopen("filehand.txt","r");

// // char name;
// // for(int i = 0 ; i<5 ; i++){
// //     scanf("%c",&name);
// // fputc(name,fptr);
// // }

// char name;

// while((name = fgetc(fptr)) != EOF){
//    printf("%c",name);
// }

// fclose(fptr);


// }



// #include <stdio.h>

// int main() {
//     FILE *fptr = fopen("filehand.txt", "r");

//     if (fptr == NULL) {
//         printf("Error opening the file.\n");
//         return 1;
//     }

//     // Read and print the first character from the file
//     int ch = fgetc(fptr);

//         printf("First character: %c\n", ch);
   

//     // Move the file pointer back to the beginning of the file using rewind
//     rewind(fptr);

//     // Read and print the first character again after rewinding
//     ch = fgetc(fptr);
    
//         printf("First character after rewinding: %c\n", ch);
    

//     fclose(fptr);

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     FILE *fptr = fopen("filehand.txt", "r");

//     if (fptr == NULL) {
//         printf("Error opening the file.\n");
//         return 1;
//     }

//     // Get the initial file position using ftell
//     long initialPosition = ftell(fptr);
//     printf("Initial position: %ld\n", initialPosition);

//     // Read and print the first character from the file
//     int ch = fgetc(fptr);
   
//         printf("First character: %c\n", ch);
  

//     // Get the current file position using ftell after reading
//     long currentPosition = ftell(fptr);
//     printf("Current position after reading: %ld\n", currentPosition);

//     fclose(fptr);

//     return 0;
// }



#include <stdio.h>

int main() {
    FILE *fptr = fopen("filehand.txt", "r");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Move the file pointer to the 10th byte from the beginning
    fseek(fptr, 9, SEEK_SET);

    // Read and print the character at the 10th byte
    int ch = fgetc(fptr);


    fclose(fptr);

    return 0;
}


