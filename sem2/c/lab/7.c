//Check if keyword is present in a document title without using standard library functions.(case-insensitive)
#include <stdio.h>
int main(){
    char title[100],keyword[50];
    int i,j,found=0;
    printf("Enter document title: ");
    fgets(title,100,stdin);
    printf("Enter keyword: ");
    fgets(keyword,50,stdin);

    for(i=0;title[i]!='\0';i++){
        if(title[i]=='\n'){
            title[i]='\0';
            break;
        }
    }

    for(i=0;keyword[i]!='\0';i++){
        if(keyword[i]=='\n'){
            keyword[i]='\0';
            break;
        }
    }

    for(i=0;title[i]!='\0';i++){
        j=0;
        while(keyword[j]!='\0' && (title[i+j]==keyword[j] || title[i+j]==keyword[j]+32 || title[i+j]==keyword[j]-32)){
            j++;
        }

        if(keyword[j]=='\0'){
            found=1;
            break;
        }
    }

    if(found)
        printf("Keyword found in title.");
    else
        printf("Keyword not found in title.");
    
    return 0;
}   