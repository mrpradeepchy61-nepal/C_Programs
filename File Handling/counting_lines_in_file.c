#include<stdio.h>
int main(){
    FILE *fp = fopen("data.txt", "r");

    int lines = 0;
    int ch;

    while((ch = fgetc(fp)) != EOF){
        if(ch=='\n'){
            lines++;
        }
    }

    printf("Total lines: %d", lines);

    fclose(fp);

    return 0;
    

}