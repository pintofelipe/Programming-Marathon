#include <iostream>
#include <vector>

//#include <coco77>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n,m,p,l;
    cin >> n>>m;


   vector<int> hasCpp(n+1, 0);
   vector<int> hasJava(n+1, 0);


   for(int i=0; i<m; i++){
        cin>>p>>l;

        if(l==1){
            hasCpp[p] = 1;
        }else if(l==2){
            hasJava[p] = 2;
        }
   }



   for(int i=1; i<=n; i++){
        if(hasCpp[i] && hasJava[i]){
            cout<<i<<endl;
        }
   }




     return 0;
}
