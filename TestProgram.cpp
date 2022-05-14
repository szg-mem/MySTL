#include <iostream>
#include "SmartPointer.h"
using namespace std;

int main()
{
    SmartPointer<int> sptr(new int);
    *sptr = 78;
    cout << *sptr << endl;
    return 0;
}