#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {2,2,1,5,2,9,4,7,0,3,6};
    sort(v.begin(), v.end());

    for(int x:v) {
        cout << x << " ";  
    }
    cout << endl;
}