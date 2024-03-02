// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i, input;
    cin >> input;
    
    int *arr = new int[input];
    
    for (i = 0; i < input; i++){
        if (i == 0){
            arr[i] = 1;
        }else if (i == 1){
            arr[i] = 1;
        }else{
            arr[i] = arr[i-1] + arr[i-2];
        }
         cout << arr[i] << " ";
    }
    
    cout << '\n' << arr[input-1];
    
    return 0;
}
