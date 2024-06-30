#include <stdio.h>
#include <string.h> //strcmp

typedef struct User{
    char id[50];
    char pw[50];
}USER;

int main(void) 
{   
    USER user = {"admin_structid","admin_structpw"};
    char *id = "admin";
    char *pw = "admin123";

    char inId[50];
    char inPw[50];

    printf("아이디를 입력하세요: ");
    scanf("%49s", inId);
    printf("암호를 입력하세요: ");
    scanf("%49s", inPw);

    if (strcmp(user.id, inId) == 0 && strcmp(user.pw, inPw) == 0) {
        printf("성공\n");
    }
    else{
        printf("실패\n");
    }

    return 0;
}