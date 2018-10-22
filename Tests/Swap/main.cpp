#include <iostream>

using namespace std;

void swapM(int &a, int &b)
{
    int c = b;
    b=a;
    a=c;
}

int main()
{
    int i=5;
    int j=6;
    swapM(i,j);
    cout << "i = " << i << " et j = " << j << endl;
    return 0;
}
