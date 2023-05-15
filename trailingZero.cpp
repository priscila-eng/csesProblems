#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int results = 0;

    cin >> n;

    while(n > 0){
        n = n / 5;
        results += n;
    }


    cout << results << endl;

    return 0;
}