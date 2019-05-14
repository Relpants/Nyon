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
    map<string, int>::iterator it;

    //std::cout << "N: " << n << std::endl;

    for (int i = 0; i < n; i++) {
        cin >> query;
        if(query > 1){
            cin >> name;
            number = 0;
        }
        else
            cin >> name >> number;

        it = mapper.find(name);
        if(it == mapper.end())
            mapper.insert(make_pair(name,number));
        else 
            it = mapper.find(name);
            it->second = it->second + number;

        if(query == 3){
            it = mapper.find(name);
            std::cout << it->second << std::endl;
        }
        if(query == 2){
            it = mapper.find(name);
            it->second = 0;
        }
        
        
        query = 0;
        number = 0;
        name = " ";

    }




    return 0;
}


