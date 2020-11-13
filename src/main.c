#include <stdio.h>

void other()
{
    printf("Yeah!\n"
           "Looks like you have hacked buffer!\n");
}

void input()
{
    char buffer[20];
    printf("Enter some text:\n");
    fflush(stdout);
    scanf("%s", buffer);
    printf("You have entered: %s\n", buffer);
    fflush(stdout);
}

int main()
{
    input();
    printf("%p", &other);
    fflush(stdout);
    return 0;
}
