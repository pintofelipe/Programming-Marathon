#include <iostream>
#include <string>
#include <set>

//#include <coco77>
// 888-888-8888 -> 1
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string phoneNumber;
    cin >> phoneNumber;


    set<char> distinctDigits;


    for(char c: phoneNumber){

        if( c != '-'){
            distinctDigits.insert(c);
        }
    }

    cout<<distinctDigits.size();




     return 0;
}
