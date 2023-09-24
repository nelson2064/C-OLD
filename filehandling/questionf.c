


#include <stdio.h>
#include <conio.h>

struct StudentInfo{
    char name[60];
    int age;
    int class;
};

void main(){


struct StudentInfo studentinfo[3];

for ( int i = 0 ; i<3 ; i++){
    scanf("%s",&studentinfo[i].name);
    scanf("%d",&studentinfo[i].age);
    scanf("%d",&studentinfo[i].class);
}



FILE *fptr;
fptr = fopen("studentdata.txt","w");

for( int i = 0 ; i<3 ; i++){
    fprintf(fptr,"%s \t",studentinfo[i].name);
    fprintf(fptr,"%d \t",studentinfo[i].age);
    fprintf(fptr,"%d \t",studentinfo[i].class);
    fprintf(fptr,"\n");
}
fclose(fptr);

fptr = fopen("studentdata.txt","r");
struct StudentInfo studentstore;
// for(int i = 0 ; i<3 ; i++){
//     fscanf(fptr,"%s \t",&studentstore[i].name);
//     fscanf(fptr,"%d \t",&studentstore[i].age);
//     fscanf(fptr,"%d \t",&studentstore[i].class);
//     fscanf(fptr,"\n");
// }
// for(int i = 0 ; i<3 ; i++){
//     printf("%s \t",studentstore[i].name);
//     printf("%d \t",studentstore[i].age);
//     printf("%d \t",studentstore[i].class);
//     printf("\n");
// }

    // while (fscanf(fptr, "%s %d %d", &studentstore.name, &studentstore.age, &studentstore.class) != EOF) {
    //     printf("Name: %s, Roll Number: %d, Age: %d\n", studentstore.name, studentstore.age, studentstore.class);
    // }
printf("\nStudent Information from File:\n");
while(fscanf(fptr,"%s \t %d \t %d \t \n",&studentstore.name , &studentstore.age ,&studentstore.class)!=EOF){
    printf("%s \t %d \t %d \t \n",studentstore.name ,studentstore.age , studentstore.class);
}
fclose(fptr);
}