#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>
using namespace std;

int main(){
    srand((unsigned) time(NULL));


    string chars [26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O",
                        "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    int nums [9] = {1, 2, 3, 4, 5, 6, 7 , 8, 9};

    bool runs = true;

    string result;

    if(runs){
        int howchar = 1 + (rand() % 10);
        int howint = 10 - howchar;
        for(int i = 1; i <= howchar; i++){
            string genSt = chars[rand() % 26];
            result += genSt;
        }

        for(int j = 1; j <= howint ; j++){
            int genINT = nums[rand() %9];
            string GENINT = to_string(genINT);
            result += GENINT;
        }
    }

    cout << result << endl;

    return 0;
}
