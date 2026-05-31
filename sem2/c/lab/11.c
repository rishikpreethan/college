//Sort the inputed marks in ascending order using bubble sort

#include <stdio.h>
int main(){
    int marks[50],n,i,j,temp;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter marks of students: ");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(marks[j]>marks[j+1]){
                temp=marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(marks[i]>40)
            printf("\n%d - Pass\n",marks[i]);
        else
            printf("\n%d - Fail\n",marks[i]);
    }
    return 0;
}