#include <stdio.h>
#include <string.h>

void convertToBinary(char c) {
    printf("%c = ", c); 
    for (int i = 7; i >= 0; i--) { // lặp từ bit thứ 7 đến bit thứ 0
        if (c & (1 << i)) { // kiểm tra bit tại vị trí i của ký tự đầu vào
            printf("1"); // nếu là bit 1, in ra số 1
        } else {
            printf("0"); // nếu là bit 0, in ra số 0
        }
    }
    printf("\n"); 
}

int main() {
    char str[] = "Hello World"; 
    int len = strlen(str); 

    printf("Binary cua '%s':\n", str);
    for (int i = 0; i < len; i++) { // lặp từng ký tự trong chuỗi
        convertToBinary(str[i]); // chuyển đổi ký tự thành chuỗi nhị phân và in ra
    }

    return 0; 
}
