#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "BiTree.h"
#include "TriTree.h"
#include"Menu.h"

void main() {
        char c = ' ';
        int sel = 1;
        int flag = 1;
        int value;
        int count;
        BiTree T;
        TriTree T1;
        Init_BiTree(T);
        Init_TriTree(T1);
        destinedfor_a_b(0, 0);
        HideCursor();
        displaymenu(sel);
        while (1)
        {
            if (_kbhit())
            {
                c = _getch();
                if (GetAsyncKeyState(VK_UP))
                {
                    sel = (sel > 1) ? sel - 1 : 2;
                    Sleep(100);
                    destinedfor_a_b(0, 0);
                    HideCursor();
                    displaymenu(sel);
                }
                if (GetAsyncKeyState(VK_DOWN))
                {
                    sel = (sel < 2) ? sel + 1 : 1;
                    Sleep(100);
                    destinedfor_a_b(0, 0);
                    HideCursor();
                    displaymenu(sel);
                }
                if (c <= 'z' && c >= 'a')
                    c = c - ('a' - 'A');
                if (c <= 'F' && c >= 'A')
                {

                    sel = c - 'A' + 1;
                    system("cls");
                    displaymenu(sel);
                }
                else if (c == '\r')
                {
                    system("cls");
                    ClearCursor();
                    displaymenu(sel);
                    char ch = 'A' + sel - 1;
                    switch (ch)
                    {
                        case 'A':
                         {
                            do {
                                system("cls");
                                system("color 0f");
                                Menu1(T);
                                TElemType input;
                                scanf_s("%d", &input);
                                printf("\n");
                                Switch1(T, input, flag);
                            } while (flag != 0);
                            return;
                         }
                        case 'B':
                        {
                            do {
                                system("cls");
                                system("color 0f");
                                Menu2(T1);
                                TElemType input1;
                                scanf_s("%d", &input1);
                                Switch2(T1, input1, flag);
                            } while (flag != 0);
                            return;
                        }
                     }
                 }
            }
         }
}

