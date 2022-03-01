#include <iostream>
#include <algorithm>

int solve(int a, int b){
    int result;
    if(a == 0){
        result = b;
    }else{
        while(b != 0){
            if(a > b){
                a = a - b;
            }else{
                b = b - a;
            }
        }
        result = a;
    }   
    return result;

}

int main(){

    int a; std::cin >> a;
    int b; std::cin >> b;

    int result = solve(a, b);
    std::cout << result << std::endl;

}
