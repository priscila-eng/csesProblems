#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    if(n == 0 || n == 1){
        printf("NO\n");
    } else {
        if(n%2 == 0 && (n/2)%2 != 0){
            printf("NO\n");
        } else if(n%2 == 0 && (n/2)%2 == 0){
            printf("YES\n");
        }
        if(n%2 != 0 && (n/2)%2 != 0){
            printf("NO\n");
        } else if(n%2 != 0 && (n/2)%2 == 0){
            printf("YES\n");
        }
    }

    return 0;
}