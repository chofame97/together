#include <stdio.h>

#define STATUS_OFF   0x00
#define STATUS_ON    0x01
#define STATUS_STOP  0x02

int main(){

    // 자료형 기본적인 내용
    char t1;           // 1 byte
    short t2;          // 2 byte
    int t3;            // 4 byte
    unsigned int t3_1; // 4 byte
    long t4;           // 4 byte
    long long t5;      // 8 byte

    float t6;          // 4 byte
    double t7;         // 8 byte

    t1 = -128;
    t1 = 127; // char에 숫자 저장
    t1 = 128; // buffer over flow

    printf("%d\n", t1);

    // bit 연산자
    // | 는 비트 합, 둘중 하나라도 1이면 1
    // & 는 비트 곱, 둘다 1이면 1
    // ^ 둘이 같으면 0
    unsigned int status = 0;

    status |= STATUS_ON;    
    printf("status on : %u\n", status & STATUS_ON);
    
    status |= STATUS_STOP;
    printf("status stop : %u\n", status & STATUS_STOP);

    if(status & STATUS_STOP){
        status &= STATUS_OFF;
        printf("\nset status off\n");
        printf("status on : %u\n", status & STATUS_ON);
        printf("status stop : %u\n", status & STATUS_STOP);
        printf("status off : %u\n", status & STATUS_OFF);
        printf("is off? : %u\n", status ^ STATUS_OFF);
    }

    status = 1;
    status <<= 1;

    printf("\nstatus shift : %x\n", status);

    return 0;
}