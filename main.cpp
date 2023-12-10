#include <iostream>
#include "sublink.h"
using namespace std;
int main() {
    sublink<int> ss;
    for (int i = 1; i <= 15; ++i) {
        ss.push(i);
    }
    ss.display();
    ss.pop();
    ss.pop();
    ss.pop();
    ss.pop();
    ss.pop();
    ss.pop();
    ss.pop();
    ss.display();
    return 0;
}
