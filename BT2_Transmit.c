#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h> 

typedef union {
    struct frame {
        char uid[4];
        char data[8];
    } frame;
    char data_frame[12];
} frame_nfc;

char* Transmit(char* id, char* dulieu) {
    frame_nfc nfc;
    char *result = malloc(12); // Cấp phát bộ nhớ động cho biến result
    strcpy(nfc.frame.uid, id);
    strcpy(nfc.frame.data, dulieu);
    for (int i = 0; i < 12; i++)
    {
        result[i] = nfc.data_frame[i];
    }
    return result;
}

int main() {
    char *result = Transmit((char*)"1011",(char*)"15677897"); // Lưu trả về của hàm Transmit() vào biến result
    for (size_t i = 0; i < 12; i++)
    {
        printf("%c", result[i]); // In từng ký tự của biến result
    }
    free(result); // Giải phóng bộ nhớ được cấp phát
    return 0;
}
