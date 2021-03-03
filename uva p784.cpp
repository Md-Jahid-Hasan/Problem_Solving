#include <iostream>
#include<stdio.h>
using namespace std;
char maze[100][100];

void searchPath(int x, int y){
    if(maze[x][y] =='X' || maze[x][y]=='#')
        return;
    maze[x][y] = '#';

    searchPath(x+1, y);
    searchPath(x-1, y);
    searchPath(x, y+1);
    searchPath(x, y-1);
}
int main(){
    int n, i, j;
    cin >> n;
    getchar();
    while(n--){
        int x = 0;
        while(gets(maze[x])){
            if(maze[x][0] == '_')
                break;
            x++;
        }

        for (i=0;i<x;i++){
            for (j=0;maze[i][j]; j++){
                if(maze[i][j] == '*')
                    searchPath(i, j);
            }
        }

        for(i=0;i<=x;i++)
            puts(maze[i]);
    }
}
