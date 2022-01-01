#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

/*
    Source by BelajarCPP
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    bool a = true, b = false;

    printf("%d\n", a && b);  //AND
    printf("%d\n", a || b);  //OR
    printf("%d\n", !b);    //NOT B(false)

    _getch();
    return 0;
}