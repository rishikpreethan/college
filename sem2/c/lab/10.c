//Create a structure for each student with name, usn, marks, avg and find the best student and students that failed in one or more subjects

#include <stdio.h>
struct Student{
    char name[50];
    char usn[20];
    int marks[3];
    float avg;
};
int main(){
    struct Student s[50];
    int i,j,n;
    int failCount;
    int bestIndex=0;
    printf("Enter the number of students: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter student %d details: ",i+1);
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter USN: ");
        scanf(" %[^\n]", s[i].usn);
        printf("Enter marks in 3 courses: ");
        s[i].avg=0;
        for(j=0;j<3;j++){
            scanf("%d",&s[i].marks[j]);
            s[i].avg+=s[i].marks[j];
        }
        s[i].avg/=3;
        if(s[i].avg>s[bestIndex].avg){
            bestIndex=i;
        }
    }
    printf("---Best Student details---");
    printf("Name: %s",s[bestIndex].name);
    printf("USN: %s",s[bestIndex].usn);
    printf("Average: %.2f",s[bestIndex].avg);
    printf("Students that failed in one or more courses: ");
    for(i=0;i<n;i++){
        failCount=0;
        for(j=0;j<3;j++){
            if(s[i].marks[j]<40){
                failCount++;
            }
        }
        if(failCount>0){
            printf("Name: %s",s[i].name);
            printf("USN: %s",s[i].usn);
            printf("Average: %.2f",s[i].avg);
        }
        else{
            printf("No one failed!");
        }
    }
}