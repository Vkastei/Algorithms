#include <iostream>
#include <algorithm>


void solve(){
    
    int a[] = {12, 1455, 1, 671, 178, 24536, 3, 2, 7, 12};

    for(int i = 1; i< sizeof(a-1); i++){
        int b = a[i];
        int j = i;
        while(j > 0 && (a[j-1] > b)){
            a[j] = a[j-1];
            j = j-1;
        }
        a[j] = b;
    }

    for(int x = 0; x< 10; x++){
        std::cout << a[x] << ", ";
    }
   
}

int main(){

    solve();

}
