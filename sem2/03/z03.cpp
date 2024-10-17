#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct {
    int x;
    int y;
} position;

void get_final_position(position &pos, int n,int (&ruchy)[]){
    for (int i = 0; i < n; i++){
        switch (i % 4)
        {
        case 0:
            pos.y += ruchy[i];
            cout << ruchy[i] << " kroków na polnoc, teraz o (" << pos.x << " , " << pos.y << ")" << endl;
            break;
        case 1:
            pos.x += ruchy[i];
            cout << ruchy[i] << " kroków na wschod, teraz o (" << pos.x << " , " << pos.y << ")" << endl;
            break;
        case 2:
            pos.y -= ruchy[i];
            cout << ruchy[i] << " kroków na poludnie, teraz o (" << pos.x << " , " << pos.y << ")" << endl;
            break;
        case 3:
            pos.x -= ruchy[i];
            cout << ruchy[i] << " kroków na zachod, teraz o (" << pos.x << " , " << pos.y << ")" << endl;
            break;
        }
    }

}

int main(int argc, char* argv[]){
    int ruchy[argc - 1];

    int ruchy_iterator = 0;
    for (int i = 1; i < argc; i++){
        ruchy[ruchy_iterator] = strtol(argv[i], NULL, 10);
        ruchy_iterator++;
    }

    position pos = {0, 0};

    get_final_position(pos, argc - 1, ruchy);

    cout << "i skonczy na wspolrzednych (" << pos.x << " , " << pos.y << ")" << endl;

    return 0;
}