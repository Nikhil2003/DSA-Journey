// Tower of Hanoi
#include <iostream>
using namespace std;
// source |  helper  |  Destiny
void towerOfHanoi(int n, char src, char helper, char dest)
{
    towerOfHanoi(n - 1, src, dest, helper);
    cout << "move from " << src << "to " << dest << endl;
    towerOfHanoi(n - 1, helper, src, dest);
}
int main()
{
    towerOfHanoi(3, 'A', 'c', 'B');
    return 0;
}