#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("stringdata.txt", "w");
    char a[1000];
    fgets(a, 100, stdin);
    // fputs(a, fp);
    fprintf(fp, "%s", a);
    fclose(fp);

    FILE *f = fopen("stringdata.txt", "r");
    char b[1000];
    // fscanf(f, "%s", b);
    fgets(b, 100, f);
    printf("%s", b);
    
    return 0;
}