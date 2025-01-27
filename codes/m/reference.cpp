/*
In the examples from the previous page, we used normal variables when we passed parameters to a function.
 You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:


*/
#include <iostream>
using namespace std;
void swapNums(int &x, int &y) {
        int z = x;
        x = y;
        y = z;
    }
int main() {
    int firstnum = 10;
    int secondnum = 50;

    cout<<"Before swap: " << "\n";
    cout<<firstnum<<secondnum<<"\n";
    swapNums(firstnum, secondnum);
    cout << "after swap: "<<"\n";
    cout<<firstnum<<secondnum<<"\n";   
        

    return 0;
}
