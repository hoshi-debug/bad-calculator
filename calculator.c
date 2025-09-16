#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int num_1;
    int num_2;
    int num_3;
    int result;
    char wait[2];
    char review[100];

    printf("\n\n\t\t\t\t\t\t\tКалька2Х\n");
    
    printf("\nВвод 1 числа");
    scanf("%d", &num_1);

    printf("\nВвод 2 числа");
    scanf("%d", &num_2);
    
    printf("\nВаше действие +, -, /, or *\n");
    scanf("%s", wait);

    if (wait[0] == '+') {
        result = num_1 + num_2;
    }
    else if (wait[0] == '-') {
        result = num_1 - num_2;
    }
     else if (wait[0] == '/') {
        result = num_1 / num_2;
    }
     else if (wait[0] == '*') {
        result = num_1 * num_2;
    }
    else{
       printf("ты че дурак тут ток знаки");
    };

    printf("\nresult - %d\n", result);

    printf("как те калкулятор");
    scanf("%s\n", review);
    printf("\n THank u - %s", review);
    return 0;
}
