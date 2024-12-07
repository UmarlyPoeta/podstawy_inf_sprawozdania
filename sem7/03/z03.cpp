#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;

void generateMaze(char maze[HEIGHT][WIDTH], int x, int y) {
    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    maze[x][y] = '.';

    for (int i = 0; i < 4; ++i) {
        int r = rand() % 4;
        swap(directions[i], directions[r]);
    }

    for (int i = 0; i < 4; ++i) {
        int nx = x + directions[i][0] * 2;
        int ny = y + directions[i][1] * 2;

        if (nx >= 0 && nx < HEIGHT && ny >= 0 && ny < WIDTH && maze[nx][ny] == '#') {
            maze[nx][ny] = '.';
            maze[x + directions[i][0]][y + directions[i][1]] = '.';
            generateMaze(maze, nx, ny);
        }
    }
}

void initializeMaze(char maze[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            maze[i][j] = '#';
        }
    }
}

void printMaze(char maze[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            cout << maze[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    char maze[HEIGHT][WIDTH];
    initializeMaze(maze);
    generateMaze(maze, 0, 0);
    maze[HEIGHT-1][WIDTH-2] = '.';
    maze[HEIGHT-1][WIDTH-1] = '.';
    printMaze(maze);
    return 0;
}
