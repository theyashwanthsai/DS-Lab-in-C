#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("search.txt", "a");
    int a[10];
    for(int i = 0; i < 5; i++){
        scanf("%d\n", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        fprintf(fp, "%d\n", a[i]);
    }


    // int b[10];
    // for (int i = 0; i < 10; i++){
    //     b[i] = a[i];
    // }
    // printf("b is %d", b[6]);
    int target, i;
    printf("Target is ");
    scanf("%d", &target);
    for(i = 0; i < 5; i++){
        if(target == a[i])
        break;
    }
    printf("at: %d", i+1);
    fclose(fp);
    return 0;
}