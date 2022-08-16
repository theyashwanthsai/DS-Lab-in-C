// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp = fopen("data.txt", "w");
//     int a;
//     printf("Enter:");
//     scanf("%d", &a);
//     fprintf(fp, "%d", a);
//     fclose(fp);

//     FILE *f = fopen("data.txt", "r");
//     int b;
//     fscanf(f, "%d", &b);
//     printf("%d", b);

//     return 0;
// }




// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp = fopen("stringdata.txt", "w");
//     char a[1000];
//     fgets(a, 100, stdin);
//     // fputs(a, fp);
//     fprintf(fp, "%s", a);
//     fclose(fp);

//     FILE *f = fopen("stringdata.txt", "r");
//     char b[1000];
//     // fscanf(f, "%s", b);
//     fgets(b, 100, f);
//     printf("%s", b);
    
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp = fopen("search.txt", "a");
//     int a[10];
//     for(int i = 0; i < 5; i++){
//         scanf("%d\n", &a[i]);
//     }
//     for(int i = 0; i < 5; i++){
//         fprintf(fp, "%d\n", a[i]);
//     }


//     // int b[10];
//     // for (int i = 0; i < 10; i++){
//     //     b[i] = a[i];
//     // }
//     // printf("b is %d", b[6]);
//     int target, i;
//     printf("Target is ");
//     scanf("%d", &target);
//     for(i = 0; i < 5; i++){
//         if(target == a[i])
//         break;
//     }
//     printf("at: %d", i+1);
//     fclose(fp);
//     return 0;
// }