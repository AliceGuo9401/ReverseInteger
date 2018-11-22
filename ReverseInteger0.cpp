#include <iostream>

using namespace std;

int reverse(int x) {
    int y(0);
    int yTemp(0);

    if(x == 0)
        return y;
        
    else if(x > 0) {
        while(x != 0) {
            if(y <= 214748363 || (y == 214748364 && x % 10 <= 7)) {
                y = y * 10 + x % 10;
                x = x / 10;
            }else
                return 0;
        }
        return y;
    }
    
    else if(x < 0) {
        if(-2147483648 < x) {
            x = 0 - x;
            while(x != 0) {
                if(y <= 214748363 || (y == 214748364 && x % 10 <= 7)) {
                    y = y * 10 + x % 10;
                    x = x / 10;
                }else
                    return 0;
            }
            return 0 - y;
        }else if(-2147483648 == x)
            return 0;
    }
}

int main() {
    int x = -2147483648;  //int取值范围1000 0000 0000 0000 0000 0000 0000 0000 ~ 0111 1111 1111 1111 1111 1111 1111 1111
    int reverseX = reverse(x);
    cout << reverseX;
    return 0;
}
