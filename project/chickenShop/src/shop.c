#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include <sample/shop_sample_base.h>

static bool shopRun = true;

void shopInit()
{
}

void shopCleanUp()
{
}

void shopSignalAction()
{
}

void shopSignal()
{
}

void shopOption()
{
}

int main()
{
    while (shopRun)
    {
        printf("[Main]Keepalive\n");
        printHello();
        sleep(1);
    }
}