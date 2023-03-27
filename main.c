#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Pos;

    Pos.X = 80;
    SetConsoleCursorPosition(hout, Pos);
    int y_changer = 0;


    for(int i = 0; i < 6 ; ++i){

        y_changer += 1;

        while(Pos.X != 0){

            Pos.Y = 11 + y_changer;
            Pos.X += -1;
            SetConsoleCursorPosition(hout, Pos);
            printf("*");
            Sleep(10);

            Pos.Y = 12 - y_changer;
            SetConsoleCursorPosition(hout, Pos);
            printf("*");
            Sleep(10);
        }

        y_changer += 1;

        while(Pos.X != 80){

            Pos.Y = 11 + y_changer;
            SetConsoleCursorPosition(hout, Pos);
            printf("*");
            Sleep(10);

            Pos.Y = 12 - y_changer;
            SetConsoleCursorPosition(hout, Pos);
            printf("*");
            Pos.X += 1;
            Sleep(10);
        }
    }

Sleep(1000);


return 0;
}
