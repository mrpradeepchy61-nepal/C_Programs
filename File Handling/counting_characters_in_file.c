#include<stdio.h>
int main() {
    FILE *fp = fopen("data.txt", "r");
    int count = 0;
    while(fgetc(fp) != EOF){
        count++;
    }
    printf("Characters in file: %d", count);
    
    fclose(fp);
    return 0;
}