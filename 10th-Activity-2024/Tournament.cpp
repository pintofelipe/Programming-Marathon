    #include <iostream>
    #include <cmath>

    using namespace std;

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);

        int numberRound, position;
        cin >> numberRound >> position;

        if (position==1) {
            cout << numberRound << endl;
            return 0;
        }

        int totalTeams = pow(2, numberRound);

        position = totalTeams - position + 1;


        while(totalTeams > position){
            numberRound--;
            totalTeams/=2;
        }


        cout << numberRound + 1;



        return 0;
    }
