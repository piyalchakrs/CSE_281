#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

int main()
{
    int a;
    stack<int> stack_1;
    cout << "Enter the stack values: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        stack_1.push(a);
    }
    int sum = 0;
    cout << "\nStack values: ";

    for (int i = 0; i < 5; i++)
    {
        cout << stack_1.top() << " ";
        sum += stack_1.top();
        stack_1.pop();
    }

    cout << "\nThe summation of all stack elements: " << sum << endl;

    return 0;
}