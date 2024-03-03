// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int even = 0, odd = 0, rem, input;
    cin >> input;
    while(input != 0){ //or input != rem
        rem = input%10;
        if (rem%2 == 0) even += rem;
        else odd += rem;
        input = input/10;
    }
    cout << even << odd;

    return 0;
}
