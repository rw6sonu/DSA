#include <iostream>
using namespace std;

int main(){

    int i, j, k, n = 1;

    for(i = 1; i <= 4 ; i++){
        for(k = 4; k > i; k--){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
     for(i = 3; i >= 1; i--){
        n = i * (i - 1) / 2 + 1;
        for(k = 1; k <= 4 - i; k++){
            cout << " ";
        }
        
        for(j = 1; j <= i; j++){
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}
