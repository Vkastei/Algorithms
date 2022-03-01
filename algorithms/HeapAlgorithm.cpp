#include <iostream>
#include <algorithm>

void solve(int k, int a[]){
    
    if(k == 1){
        std::cout << a;
    }else{
        solve(k -1, a);

        for(int i = 0; i < k -1; i++){
            if(k % 2 == 0){
                swap(a[i], a[k-1]);
            }else{
                swap(a[0], a[k-1]);
            }

            solve(k - 1, a);
        }
    }

}

int main(){

    int i = 5;
    int a[] = {};
    solve(i, a);

}
