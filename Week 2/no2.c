#include <stdio.h>
#include <string.h>
int main() {
    char string1[100], string2[100], string3[100];
    char combinedFlippedString[100];
    int startIndexFlippedString = 0;
    printf("Gabungan 3 buah inputan kalimat =\n");
    scanf("%[^\n]",string1);
    fflush(stdin);
    scanf("%[^\n]",string2);
    fflush(stdin);
    scanf("%[^\n]",string3);
    int lengthString1 = strlen(string1);
    int lengthString2 = strlen(string2);
    int lengthString3 = strlen(string3);
    for (int i = lengthString3  - 1; i >= 0 ; i--) {
        combinedFlippedString[startIndexFlippedString++] = string3[i];
    }
    combinedFlippedString[startIndexFlippedString++] = ' ';
    for (int i = lengthString2 - 1; i >= 0 ; i--) {
        combinedFlippedString[startIndexFlippedString++] = string2[i];
    }
    combinedFlippedString[startIndexFlippedString++] = ' ';
    for (int i = lengthString1 - 1; i >= 0 ; i--) {
        combinedFlippedString[startIndexFlippedString++] = string1[i];
    }
    printf("Hasil membalik kalimat gabungan = %s\n",combinedFlippedString);
    printf("Jumlah Huruf kalimat pertama = %d\n",lengthString1);
    printf("Jumlah Huruf kalimat kedua = %d\n",lengthString2);
    printf("Jumlah Huruf kalimat ketiga = %d\n",lengthString3);
    printf("Total Jumlah Huruf = %d\n",lengthString1+lengthString2+lengthString3);
    return 0;
}
