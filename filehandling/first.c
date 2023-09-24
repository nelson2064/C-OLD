
#include <stdio.h>
#include <conio.h>
#include <string.h>



// void main(){

// // char name[10] , post[10];
// // float s;

// // FILE *fptr;
// // fptr = fopen("name.txt","w");

// // for(int i = 1 ; i<=2; i++){
// // scanf("%s  %s  %f",&name , &post , &s);
// // fprintf(fptr,"%s \t %s \t %0.2f \n", name , post , s);

// // }

// // fclose(fptr);

// // return;





// // int smark , mmark , emark;
// // char name[10] ,  yes[10] ;

// // FILE *fptr;
// // fptr = fopen("name.txt","w");


// // do {
// //         printf("Enter the student's name and their science mark, math mark, and English mark one by one: ");
// //         scanf("%s %d %d %d", name, &smark, &mmark, &emark);
// //         fprintf(fptr, "%s %d %d %d\n", name, smark, mmark, emark);

// //         printf("If you want to store the name and marks of another student, press 'y': ");
// //         scanf(" %c", yes);
// //     } while (strcmp(yes, "y") == 0 || strcmp(yes, "Y") == 0);
// // fclose(fptr);
// // return;


// // char name[10] , ch[10];
// // int r, m , s, e;
// // FILE *fptr;
// // fptr  = fopen("record.txt","w");;
// // do{
// //     printf("Enter roll name math sci eng");
// //     scanf("%d %s %d %d %d",&r , name , &m , &s , &e);
// //     fprintf(fptr,"%d %s %d %d %d", r , name , m , s , e);
// //     printf("Do you want to continue");
// //     scanf("%s",ch);

// // }while (strcmp(ch,"y") == 0 || strcmp(ch, "Y"));
// // fclose(fptr);
// // return;


 
// // int smark , mmark , emark;
// // char name[10] ,  yes[10] ;

// // FILE *fptr;
// // fptr = fopen("name.txt","w");


// // do {
// //         printf("Ednter the student's name and their science mark, math mark, and English mark one by one: ");
// //         scanf("%s %d %d %d", &name, &smark, &mmark, &emark);
// //         fprintf(fptr, "%s %d %d %d\n", name, smark, mmark, emark);

// //         printf("If you want to store the name and marks of another student, press 'y': ");
// //         scanf(" %s", &yes);
// //     } while (strcmp(yes, "y") == 0 || strcmp(yes, "Y") == 0);
// // fclose(fptr);
// // return;


 
// // int smark , mmark , emark;
// // char name[10] ,  yes[10] ;
// // FILE *fptr;

// // fptr = fopen("name.txt","w");
// // scanf("%s %d %d %d", &name, &smark, &mmark, &emark);
// // fprintf(fptr ,"%s %d %d %d", name, smark, mmark, emark);
// // fclose(fptr);



// // fptr = fopen("name.txt","r");
// // fscanf(fptr ,"%s %d %d %d", &name, &smark, &mmark, &emark);
// // printf( "%s %d %d %d\n", name, smark, mmark, emark);
// // fclose(fptr);

// // return;

// }

// void main(){

// int a = 20 , *value;
// value = &a;
// printf("%d\n",a);
// printf("%u\n",value);
// printf("%d\n",*value);
// *value = 199;
// printf("%u\n",value);
// printf("%d\n",*value);
// printf("%d",a);
// }








//file handling writing fprintf = for all kind of things  , fputc = insert only one char , fputs = insert whole character ,


// // fprintf(fptr , "skdfsdkfsjdf");

// void main(){
// char abc[50];

// FILE *fptr;
// fptr  = fopen("file.txt","w");

// printf("enter the data");
// scanf("%s",&abc);
// // fputs(abc , fptr) ;      //directly insert all the characters in file //put all string in ones
// for(int i = 0 ; i<50 ; i++){
// fputc(abc[i],fptr);             //put character only one ata a time
// }

// fclose(fptr);

// }



//reading       fscanf        fgetc        fgets


// void main(){
//     char read;
//     // char read[10];
//     FILE *fptr;
//      fptr =fopen("name.txt","r");
//     if(fptr == NULL){
//         printf("error");
//     }


//     // fgets(read, 10 , fptr);
//     // printf("%s",read);
   
//   while(!feof(fptr)){
// read = fgetc(fptr);
//  printf("%c", read);
//   }
    

   
//     fclose(fptr);

// }


//apend            a
void main(){
    char read[10];
    // char read[10];
    FILE *fptr;
     fptr =fopen("name.txt","a");

     gets(read);
     fputs(read , fptr);

//    fprintf(fptr , "heelo i have added this");

   
    fclose(fptr);

} 