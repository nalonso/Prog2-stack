#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<int> stackInst;
    stackInst.Push(15).Push(23).Push(45).Push(42);

    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Pop() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Pop() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Pop() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Pop() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Pop() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << "Hello world!" << endl;
    return 0;
}
