#include<stdio.h>
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp,"Hello broo");
    fclose(fp);
    printf("Data written successfully");
    return 0;
}