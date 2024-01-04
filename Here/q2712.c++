#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <cctype>
#include <string>


using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n;
    string s, numero, letra;
    bool ok = true;

    cin >> n;

    for(int i = 0; i < n; i++){
        ok = true;
        cin >> s;

        if(s.size() != 8){
            ok= false;
        }
        
        if(!isupper(s[0])){
            ok = false;
        }
        if(!isupper(s[1])){
            ok = false;
        }
        if(!isupper(s[2])){
            ok = false;
        }
        if(s[3] != '-'){
            ok = false;
        }
        if(!isdigit(static_cast<int>(s[4]))){
            ok = false;
        }
        if(!isdigit(static_cast<int>(s[5]))){
            ok = false;
        }
        if(!isdigit(static_cast<int>(s[6]))){
            ok = false;
        }
        if(!isdigit(static_cast<int>(s[7]))){
            ok = false;
        }

        if(ok){
            if(s[7] == '1' || s[7] == '2'){
                cout << "MONDAY" << endl;
            }
            else if(s[7] == '3' || s[7] == '4'){
                cout << "TUESDAY" << endl;
            }
            else if(s[7] == '5' || s[7] == '6'){
                cout << "WEDNESDAY" << endl;
            }
            else if(s[7] == '7' || s[7] == '8'){
                cout << "THURSDAY" << endl;
            }
            else if(s[7] == '9' || s[7] == '0'){
                cout << "FRIDAY" << endl;
            }
        }
        else{
            cout << "FAILURE" << endl;
        }

    }

    return 0;
}