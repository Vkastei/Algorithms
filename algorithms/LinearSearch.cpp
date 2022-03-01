#include <iostream>
#include <algorithm>

void solve(){
    int key;
    int a[] = {12, 1, 3, 512, 6519, 1999, 299, 16};

    std::cin >> key;
    

    int n = sizeof(a);
    bool searchSuccess = false;
    int i = 0;

    
    for(i;i <= n; i++){

        if(a[i] == key){
            searchSuccess = true;
            break;
        }
    }
    if(searchSuccess){
        std::cout << i;

    }else{
        std::cout << "Suche war nicht erfolgreich" << std::endl;
    }
}

int main(){

   
    solve();

}
