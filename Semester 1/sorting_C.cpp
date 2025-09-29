#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct siswa{
    char num[11];
    char name[22];
};


int compare(const void *a, const void *b){
    return strcmp (((struct siswa *)a)->num, ((struct siswa*)b)-> num);
}

int main(){
    FILE *file = fopen("testdata.in", "r");
    if(file == NULL){
        fprintf(stderr, "Gagal membuka file.\n");
        return 1;
    }

    int N;
    fscanf(file, "%d", &N);

    struct siswa juara[N];
    for(int i = 0; i < N; i++){
        fscanf(file, "%s %s", juara[i].num, juara[i].name);
    }
    fclose(file);

    qsort(juara, N, sizeof(struct siswa), compare);
    for(int i = 0; i< N; i++){
        printf("%s %s\n", juara[i].num, juara[i].name);

    }


    return 0;
}
