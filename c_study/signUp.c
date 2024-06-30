#include <stdio.h>
#include <string.h>

typedef struct _user
{
    char user_id[10];
    char user_password[30];
} USER;

typedef struct _user_info
{
    USER user;
} USER_INFO;

void signUp();
void goHome();
void signIn();
int main()
{
    int userCount = 0;
    USER user;
    goHome();
    return 0;
}

// 1. 회원가입
void signUp()
{
    USER user;

    while (1)
    {
        printf("\n메인페이지로 가려면 'home' 입력");
        printf("\n아이디 입력 : ");
        scanf("%9s", user.user_id);

        if (strcmp(user.user_id, "home") == 0)
        {
            goHome();
            break;
        }

        while (1)
        {
            if (sizeof(user.user_id) > 0)
            {
                printf("\n메인페이지로 가려면 'home' 입력");
                printf("\n비밀번호 입력 : ");
                scanf("%29s", user.user_password);

                if (strcmp(user.user_password, "home") == 0)
                {
                    goHome();
                    break;
                }
                break;
            }
            break;
        }
        signIn();

        break;
    }
}

// 2. 홈으로 가기
void goHome()
{
    int selectNumber = 0;
    while (1)
    {
        printf("\n1. 회원가입\n");
        printf("2. 로그인\n");
        printf("번호 입력 : ");
        scanf("%d", &selectNumber);

        switch (selectNumber)
        {
        case 1:
            signUp();
        case 2:
            signIn();
        default:
            printf("\n★번호 확인 바람★\n");
            continue;
        }
        break;
    }
}

// 3. 로그인 하기
void signIn()
{
    USER user;
    USER_INFO userInfo;
    char id;
    char pw;
    while (1)
    {
        printf("\n메인페이지로 가려면 'home' 입력");
        printf("\n로그인 아이디입력 : ");
        scanf("%9s", &id);

        if (strcmp(user.user_id, "home") == 0)
        {
            goHome();
            break;
        }
        if (strcmp(user.user_id, id) == 0)
        {
            if (strcmp(user.user_id, userInfo.user.user_id) == 0)
            {
                printf("\n메인페이지로 가려면 'home' 입력");
                printf("\n비밀번호 입력 : ");
                scanf("%29s", user.user_password);
                if (strcmp(user.user_password, "home") == 0)
                {
                    goHome();
                    break;
                }
                if (strcmp(user.user_password, userInfo.user.user_password) == 0)
                {
                    printf("\n로그인 성공");
                    printf("\n아이디 : %s", user.user_id);
                    printf("\n비번 : %s", user.user_password);
                }
            }
            else
            {
                printf("\n없는아이디 다시 입력바람");
                continue;
            }
        }

        break;
    }
}