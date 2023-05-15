#include <bits/stdc++.h>

using namespace std;

int fatorial(int n){
    int result = 1;
    for(int i=1; i<=n; i++){
        result *= i;
    }

    return result;
}

int main(){

    int n;
    cin >> n;

    // int result;

    int cima;
    int baixo;

    // cima = fatorial(2 + (n-1));
    // baixo = fatorial(n);

    // result =  cima/baixo;

    int result = 1;

    for(int i=0; i<n; i++){
        result *= 2;
        int aux = result;
        result = aux%abs((int)pow(10, 9) + 7);
    }

    printf("%d\n", result);
    return 0;
}