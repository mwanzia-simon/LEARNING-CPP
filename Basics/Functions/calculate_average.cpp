#include <iostream>
using namespace std;

double calculateAverage(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{

    cout << "Average: " << calculateAverage(38, 98, 58) << endl;
    return 0;
}