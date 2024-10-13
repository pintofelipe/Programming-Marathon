#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    short int ampere,watt,volt;

    cin>>ampere>>watt>>volt;


    float total = (watt/volt);


    if(total >= ampere){
        cout << 1;
    }else{
        cout << 0;
    }

     return 0;
}
