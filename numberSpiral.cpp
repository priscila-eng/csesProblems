#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, i, j;

    cin >> n;

    for (long long int k = 0; k < n; k++)
    {
      cin >> i >> j;
      long long int diag, results;
      diag = (max(i, j)*max(i, j)) - (max(i, j) - 1);
      if(i == j){
        results = diag;
      } else if(i%2 == 0 && i >=j) {
        results = diag + abs(i - j);
      } else if(i%2 != 0 && i >=j){
        results = diag - abs(i - j);
      }
      if(j%2 == 0 && j > i) {
        results = diag - abs(i - j);
      } else if(j%2 != 0 && j > i){
        results = diag + abs(i - j);
      }
      
      printf("%lld\n", results);
    }
    

    return 0;
}