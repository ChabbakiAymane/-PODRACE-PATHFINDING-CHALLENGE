#include <fstream>
#include <vector>
#include <iostream>

#define W 1
#define B 0
#define EMPTY -1

using namespace std;

ofstream out("output.txt");


void writeSol(vector<int> &sol);

void printTextMap(vector<vector<int>> map, int n, int m);

//COMPILAZIONE: /usr/bin/g++ -DEVAL -std=gnu++11 -O2 -pipe -static -s -o swrace grader.cpp swrace.cpp

int main(){
    int n, m, b, w;
	ifstream in("input.txt");
	in >> n >> m >> b >> w;
    vector<vector<int>> map(n, vector<int>(m,EMPTY));
    
    for(int i = 0; i < b; i++){
        int r, c;
        in >> r >> c;
        map[r][c] = B;
    }

    for(int i = 0; i < w; i++){
        int r, c;
        in >> r >> c;
        map[r][c] = W;
    }

    printTextMap(map, n, m);

	return 0;
}


void writeSol(vector<int> &sol){
    int len = sol.size();
    for(int i = 0; i < len - 1; i++){
        out << sol[i] << " ";
    }
    out << sol[len-1] << "#" << endl;
}

void printTextMap(vector<vector<int>> map, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "[";
            switch (map[i][j]){
                case EMPTY:
                    cout << " ";
                    break;
                case B:
                    cout << "B";
                    break;
                case W:
                    cout << "W";
                    break;
                default:
                    break;
            }
            cout << "]";
        }
        cout << endl;
    }
}

