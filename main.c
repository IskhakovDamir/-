#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nam {
    int num;
    char surname[20];
    char name[20];
    char group[10];
};

struct tim {
    int num;
    int h1;
    int h2;
    int m1;
    int m2;
    int s1;
    int s2;
};

int main() 
{
    FILE *fname = fopen("name.txt", "r");
    FILE *ftime = fopen("time.txt", "r");
    FILE *foutput = fopen("output.txt", "w");

    if (fname == NULL) {
        printf("Ошибка открытия файла name.txt");
        return 1;
    }
    if (ftime == NULL) {
        printf("Ошибка открытия файла time.txt");
        return 1;
    }
    if (foutput == NULL) {
        printf("Ошибка создания файла output.txt");
        return 1;
    }

    struct nam sportmens[100];
    int num_name = 0;

    while (!feof(fname)) {
        fscanf(fname, "%d %s %s %s", &sportmens[num_name].num, sportmens[num_name].surname, sportmens[num_name].name, sportmens[num_name].group);
        num_name++;
    }

    struct tim tims[100];
    int num_tims = 0;

    while (!feof(ftime)) {
        fscanf(ftime, "%d %d : %d : %d %d : %d : %d", &tims->num, &tims->h1, &tims->m1, &tims->s1, &tims->h2, &tims->m2, &tims->s2);
        num_tims++;
    }
    
    int sum_h = tims->h2 - tims->h1;
    int sum_m = tims->m2 - tims->m1;
    int sum_s = tims->s2 - tims->s1;
    
    if(tims->h2 < tims->h1){
        sum_h = 24 - tims->h1;
    }
    if(tims->m2 < tims->m1){
        sum_m = 60 - tims->m1;
    }
    if(tims->s2 < tims->s1){
        sum_s = 60 - tims->s1;
    }
    
    for (int i = 0; i < num_tims; i++){
        fprintf(foutput,"%d %s %s %s %d:%d:%d ", tims->num, sportmens->surname, sportmens->name, sportmens->group, sum_h, sum_m, sum_s);
    }

    fclose(fname);
    fclose(ftime);
    fclose(foutput);

    return 0;
}