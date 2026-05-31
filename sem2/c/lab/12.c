//Count the number of characters and lines in a text file

#include <stdio.h>
int main(){
    char filename[100],ch;
    FILE *file;
    int lines=0,characters=0;
    printf("Enter file name: ");
    scanf("%s",filename);
    file=fopen(filename,"r");
    if(file==NULL){
        printf("Error:Could not open file.\n");
        return 1;
    }
    while((ch=fgetc(file))!=EOF){
        characters++;
        if(ch=='\n'){
            lines++;
        }
    }
    if(characters>0 && ch!='\n'){
        lines++;
    }
    fclose(file);
    printf("Total characters: %d",characters);
    printf("Total lines: %d",lines);
    return 0;
}