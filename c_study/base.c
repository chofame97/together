#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/base.h"

typedef struct _user
{
    char text[10];
    char name[10];
} USER;

int main()
{
    USER *user = (USER *)malloc(sizeof(USER));
    strncpy(user->text, "user_text", sizeof(user->text));
    //printf("\n usertext :%s\n", user->text);

    strncpy(user->name, "chofame", sizeof(user->name));
    //printf("\n username :%s\n", user->text);

    USER newUser;
    memcpy(&newUser, user, sizeof(newUser));
    //printf("\n newUser : %s \n", newUser.text);

    USER *pUser = (USER *)malloc(sizeof(USER));
    memcpy(pUser, user, sizeof(pUser));
    //printf("\n pUser: %s\n", pUser->text);

    USER *pUser2 = user;
    memcpy(pUser2, user, sizeof(pUser2));
    //printf("\n pUser2: %s\n", pUser2->text);
    
    free(user);
    printf("\n newUser : %s \n", newUser.text);
    printf("\n pUser: %s\n", pUser->text);
    printf("\n pUser2: %s\n", pUser2->text);
    /*
    char buf[100];
    printf("\n입력 : ");
    scanf("%99s", buf);

    char bufCpy[10];
    strncpy(bufCpy, buf, sizeof(bufCpy)-1);
    //printf("\n%s\n",bufCpy);

    strncat(buf,bufCpy,sizeof(bufCpy));
    //printf("\n%s\n",buf);

    char bufMemcpy[20];
    memcpy(bufMemcpy,buf,sizeof(bufMemcpy));
    printf("\neme=%s\n",bufMemcpy);
    */

    return 0;
}