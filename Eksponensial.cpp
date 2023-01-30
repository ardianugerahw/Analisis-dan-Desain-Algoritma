#include <iostream>
#include <cmath>

using namespace std;

int power(int baseNum, int powNum){
    
    // menggunakan rumus ekponen a pangkat b
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum; 
    }
    return result;
}

int main()
{
    cout << power(4,3); //misal 4 pangkat 3 maka outputnya 64
    return 0;
}
