#include <iostream>
using namespace std;
int main() {
    int count = 1;
    while (true) {
        cout<<count<<endl;
        if(count == 1000) {
            break; // Exit the loop when count reaches 10000
        }
        count++;
    }
    return 0;
   
}
