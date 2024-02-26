#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
int main()
{
    int a, num;
    stack<int> stack_1;
    stack<int> stack_2;
    for (int i = 0; i < 6; i++)
    {
        stack_1.push(i);
    }
    while (!stack_1.empty())
    {
        num = factorial(stack_1.top());
        stack_2.push(num);
        stack_1.pop();
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Factorial : " << i << " = " << stack_2.top() << endl;
        stack_2.pop();
    }

    return 0;
}