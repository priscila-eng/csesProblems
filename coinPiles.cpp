#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    
    long long int a, b;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        if(((2*a - b) >= 0 && (2*a - b)%3 == 0) && ((2*b - a) >= 0 && (2*b - a)%3 == 0)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}