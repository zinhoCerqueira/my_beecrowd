#include <iostream>
#include <string>

using namespace std;


int main() {
    std::string minhaString;

    std::getline(std::cin, minhaString);

    if(minhaString.length() > 140){
        cout << "MUTE" << endl;
    }
    else{
        cout << "TWEET" << endl;

    }
    
    return 0;
}
