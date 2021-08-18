#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> h;
    stringstream sed(str);
    
    int temp;
    char ch;
    
    while (sed>>temp){
        h.push_back(temp);
        sed>>ch;
    }
    return h;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
