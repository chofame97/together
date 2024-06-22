#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _user_info
{
    char user_text[16];
}USER_TEXT;

typedef struct _user
{
    int age;
    char name[8];
    USER_TEXT text;
}USER;

int main(){
    USER user;

    user.age = 20;
    strncpy(user.name, "james", sizeof(user.name));
    strncpy(user.text.user_text, "i am james", sizeof(user.text.user_text));

    printf("%d\n", user.age);
    printf("%s\n", user.name);
    printf("%s\n", user.text.user_text);

    USER *user2 = (USER*)malloc(sizeof(USER));
    user2->age = 11;
    printf("\n%d\n", user2->age);

    return 0;
}