 // Meetr.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//头文件
#include<iostream>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<string>
#include"snake.cpp"
#include"chess.cpp"
#include"RIFC.cpp"
#include"Maze.cpp"
#include"tetris.cpp"
//预处理
#define PI 3.1415926
#define MAX 0x7ffffff
#define clear(a) {Sleep(a);system("cls");}
#define setCode() {system("chcp 65001");}
//空间调用
using namespace std;
//函数区
int getGame(string a) {
    if (a == "tcs") return 1;
    if (a == "gjxq")return 2;
    if (a == "wzq")return 3;
    if (a == "elsfk")return 4;
    if (a == "mg")return 5;
    return 0;
}
void snakeGame(bool q) {
    if (q == false) return;
    else {
        clear(6000);
        main1();
    }
}
void chessGame(bool q) {
    if (q == false) return;
    else {
        clear(6000);
        main2();
    }
}
void RIFCGame(bool q) {
    if (q == false) return;
    else {
        clear(6000);
        main3();
    }
}
void tetrisGame(bool q) {
    if (q == false) return;
    else {
        clear(6000);
        main5();
    }
}
void mazeGame(bool q) {
    if (q == false) return;
    else {
        clear(6000);
        main4();
    }
}
void sendMessageGameStart(int a) {
    switch (a) {
        case 1:
            snakeGame(true);
            break;
        case 2:
            chessGame(true);
            break;
        case 3:
            RIFCGame(true);
            break;
        case 4:
            tetrisGame(true);
            break;
        case 5:
            mazeGame(true);
            break;
        default:
            cout << "Thanks for using our program.\n...";
            clear(3000);
            return;
    }
}
//主函数
int main()
{
    string str;
    snakeGame(false);
    chessGame(false);
    RIFCGame(false);
    tetrisGame(false);
    mazeGame(false);
    setCode();
    clear(0);
    cout << "Welcome To My Game!\n";
    Sleep(1000);
    cout << "What do you want to play?\n.>";
    getline(cin, str);
    int setGame = getGame(str);
    cout << "Oh, You choose ";
    switch (setGame) {
        case 1:
            cout << "贪吃蛇.\n";
            sendMessageGameStart(1);
            break;
        case 2:
            cout << "国际象棋.\n";
            sendMessageGameStart(2);
            break;
        case 3:
            cout << "五子棋.\n";
            sendMessageGameStart(3);
            break;
        case 4:
            cout << "俄罗斯方块.\n";
            sendMessageGameStart(4);
            break;
        case 5:
            cout << "迷宫.\n";
            sendMessageGameStart(5);
            break;
        default:
            cout << "Nothing.\n";
            sendMessageGameStart(0);
    }
}
