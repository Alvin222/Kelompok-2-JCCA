#include <stdio.h>

int main(void) {
    int secondInput;
    printf("Masukan jumlah detik:\n");
    scanf("%d",&secondInput);
    int hour = secondInput / 3600;
    int minute = (secondInput % 3600) / 60;
    int second = secondInput % 3600 % 60;
    printf("%02d:%02d:%02d",hour,minute,second);
    return 0;
}
