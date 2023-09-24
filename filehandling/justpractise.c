#include <conio.h>
#include <stdio.h>


struct StudentInfo 
{

char name[100];
int age;
int class;
};


void main(){
FILE *fptr;
fptr = fopen("practise.txt","w");



struct StudentInfo studentdata[3];

for (int i = 0; i < 3; i++)
{
    scanf("%s",&studentdata->name[i]);
    scanf("%d",&studentdata->age[i]);
    scanf("%d",&studentdata->class[i]);
}


for(int i = 0 ; i<3 ; i++){
    fprintf(fptr,"%s",studentdata->name[i]);
    fprintf(fptr,"%s",studentdata->age[i]);
    fprintf(fptr,"%s",studentdata->class[i]);
}


fclose(fptr);







}