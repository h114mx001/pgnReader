#include <bits/stdc++.h>
#include <regex.h>
using namespace std;
int main(){
    string text = "[Event \"vs Computer\"]";
    regex rgx (R"(\[(\w+)\s\"(\N+)\"\])");
    smatch match;
    regex_search(text, match, rgx);
    for (auto x: match){
        cout << x << " ";
    }
    //hello
}