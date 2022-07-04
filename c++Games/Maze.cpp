#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;char c,skin;
char Map_1[105][105]={
{'S','#','#','0','#','0','0','0'},{'0','0','0','0','0','0','#','0'},
{'#','0','#','#','#','#','0','0'},{'0','0','#','0','0','0','#','0'},
{'#','0','0','0','#','0','0','0'},{'0','0','#','0','0','#','0','#'},
{'#','0','#','#','0','0','0','0'},{'#','0','0','0','#','0','#','E'}};
char Map_2[105][105]={
{'S','0','0','0','0','#','#','0'},{'0','#','#','0','#','#','0','0'},
{'0','0','#','0','0','0','0','#'},{'#','0','0','0','#','#','0','#'},
{'0','0','#','0','0','#','0','0'},{'#','0','#','#','0','0','0','#'},
{'0','0','#','0','0','#','0','#'},{'#','0','0','0','#','#','0','E'}};
char Map_3[105][105]={
{'S','0','0','0','0','0','#','0','0','0'},{'0','#','0','#','#','0','#','0','#','0'},
{'0','#','0','#','0','0','#','0','#','0'},{'0','0','0','#','#','0','0','0','#','0'},
{'#','0','#','#','0','#','#','#','0','0'},{'0','0','#','0','0','0','0','0','#','0'},
{'0','#','#','0','#','0','#','0','0','0'},{'0','0','#','0','#','0','#','0','#','#'},
{'#','0','0','0','#','#','#','0','0','0'},{'#','#','0','#','#','?','0','0','#','E'},};
bool defind(int i,int j,char Map[105][105]){
for(int l=0;l<i;l++)
for(int k=0;k<j;k++)
if(Map[l][k]==skin)return true;
return false;}//void secret()//{//	return;//}
void out(char Map[105][105],int a1,int b1,int fx,int fy){
int a=a1-1,b=b1-1;
system("cls");
int tx=0,ty=0,fop=0;
while(1){
clock_t t=clock();
int i,j;
for(i=0;i<a1;++i){
for(j=0;j<b1;++j){
printf("%c ",Map[i][j]);}
printf("\n");}
c=getch();fop+=1;
if(c=='w'&&Map[tx-1][ty]!='#'){
Map[tx][ty]='0';
tx-=1;
Map[tx][ty]=skin;}
if(c=='s'&&Map[tx+1][ty]!='#'){
Map[tx][ty]='0';
tx+=1;
Map[tx][ty]=skin;}
if(c=='a'&&Map[tx][ty-1]!='#'){
Map[tx][ty]='0';
ty-=1;
Map[tx][ty]=skin;}
if(c=='d'&&Map[tx][ty+1]!='#'){
Map[tx][ty]='0';
ty+=1;
Map[tx][ty]=skin;}
system("cls");
if(fx>-1&&fy>-1&&Map[fx][fy]!='?')
return;//		secret();
if(Map[a][b]!='E'){
double s=clock()-t;
printf("Game over!\nUsed %d Moves.\nUsed %.2lf seconds.\n",fop,s/60);
printf("Press shift+r to restart.Others to back the Main.\n");
return;}
if(defind(a1,b1,Map)!=true){
printf("Error: Reason is you get off the Side..Extus value 3210895\n");
return;}}}
void motto(){
system("color 0a"); //choose for yourself!
printf("|===================================Main======================================|\n");
printf("|Version : Beta 1.12.7                                感谢游玩                |\n");
printf("|W: Up S: Down A: Left D: Right                  制作人:YaMi  校准:YaMi       |\n");
printf("|**更新内容:                                         遇到问题请上传至:        |\n");
printf("|1.新增地图3                                       qy0201@outlook.com         |\n");
printf("|2.修改了字体颜色                                   ~~~~~~~~~~~~~~~~~~        |\n");
printf("|Press 1 to start Stage 1.                            敬请期待......          |\n");
printf("|Press 2 to start Stage 2.                                                    |\n");
printf("|Press 3 to start Stage 3.                                                    |\n");
printf("|=============================================================================|\n");
printf("plz press any keyboard to be your skin.\n");
skin=getch();
printf("skin:\"%c\"\nPress the number to start game.\n",skin);
char word=getch();
if(word=='1'){
out(Map_1,8,8,-1,-1);
while(getch()=='R'){
Map_1[0][0]=skin;
Map_1[7][7]='E';
out(Map_1,8,8,-1,-1);}
Map_1[0][0]='S';
Map_1[7][7]='E';
system("cls");
motto();}
else if(word=='2'){
out(Map_2,8,8,-1,-1);
while(getch()=='R'){
Map_2[0][0]='S';
Map_2[7][7]='E';
out(Map_2,8,8,-1,-1);}
Map_2[0][0]=skin;
Map_2[7][7]='E';
system("cls");
motto();}
else if(word=='3'){
out(Map_3,10,10,9,5);
while(getch()=='R'){
Map_2[0][0]='S';
Map_2[9][9]='E';
out(Map_2,10,10,9,5);}
Map_2[0][0]=skin;
Map_2[9][9]='E';
system("cls");
motto();}
else{
out(Map_1,8,8,-1,-1);
while(getch()=='R'){
Map_1[0][0]=skin;
Map_1[7][7]='E';
out(Map_1,8,8,-1,-1);}
Map_1[0][0]='S';
Map_1[7][7]='E';
system("cls");
motto();}return;}
void main4(){system("chcp 65001");motto();}
