#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    int query;
    int number;
    string name;
    cin >> n;
    std::map <string, int> mapper;

    for (int i = 0; i < n; i++) {
        cin >> query >> name;
        if(query == 1){
            cin >> number;
            mapper[name] += number;
        }
        if(query == 2)
            mapper[name] = 0;
        else if(query == 3)
            std::cout << mapper[name] << std::endl;

    }

    return 0;
}



