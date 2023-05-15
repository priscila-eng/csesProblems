#include <bits/stdc++.h>


using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    for (int i = 0; i < n - 1; i++) {
        if (abs(array[i] - array[i+1]) == 1) {
            for(int j =0; j < n; j++) {
                if(abs(array[i] - array[j]) != 1) {
                    int aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                    break;
                }
            }
        }
    }

    bool is_beautiful = true;
    for (int i = 0; i < n - 1; i++) {
        cout << array[i] << " ";
        if (abs(array[i] - array[i+1]) == 1) {
            is_beautiful = false;
            break;
        }
    }

    if (is_beautiful) {
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
    } else {
        printf("NO SOLUTION\n");
    }

    return 0;

}
