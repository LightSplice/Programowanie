#include <iostream>

int globalVariable = 7;

void AnotherFunction(int parameter)
{
    parameter = 12;
    int anotherVariableInFunction = 6;
}

void TestFunction()
{
    int localVariableInFunction = 5;
    AnotherFunction(localVariableInFunction);
}

int main()
{
    /*int localVariableInMain = 8;
    TestFunction();
    globalVariable = 77;
    AnotherFunction(7);*/



}
