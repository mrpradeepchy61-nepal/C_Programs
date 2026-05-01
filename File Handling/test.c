#include<stdio.h>
int main() {
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "w");

    printf("Enter some text:\n");
    fgets(text, sizeof(text), stdin);
    
    fprintf(fp,"%s", text);
    
    fclose(fp);
    printf("Data written successfully");
    return 0;
}