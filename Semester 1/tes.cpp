#include <stdio.h>
#include <string.h>

void swapStrings(char *a, char *b) {
    char temp[50];strcpy(temp, a);
    strcpy(a, b);strcpy(b, temp);
	}
    
void bubbleSortStrings(char arr[][50], int n) {
    for (int i = 0; i < n - 1; i++) {for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0){
swapStrings(arr[j], arr[j + 1]);
}
}
}
}

void printStringArray(char arr[][50], int n) {
    for (int i = 0; i < n; i++) {printf("%s ", arr[i]);}
    printf("\n");}
    
int main() {
    char data[][50] = {"Ali", "Ani", "Tono", "Bayu", "Amir", "Ani", "Budi", "Tini", "Ucok", "Paijo"};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Array of strings before sorting:\n");
    printStringArray(data, n);bubbleSortStrings(data, n);
    printf("Array of strings after Bubble Sort:\n");
    printStringArray(data, n);
    return 0;
}

