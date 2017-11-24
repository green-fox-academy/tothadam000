#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <regex>
#include <cstdio>
using namespace std;

int main()
{
   /* vector<string>myString;
    regex pattern("\\([0-9][0-9][0-9]\\)");
    string line = "lkjmnjsk763hchjkhasdazannyapicsáját!éaukdvfsajkcjds1986jcvshdj,cnsdljcvhcb,hbnSA910LCFSMA-ÉKL";

        smatch sm;
        regex_match(line, sm, pattern);
        for (int i = 0; i < myString.size(); ++i){
        myString.push_back(line);
        }
        for (int i = 0; i < myString.size(); ++i) {
            cout << myString.at(i) << endl;
        }*/
string str = "aaabxxxaab";
regex rx("ab");

vector<int> index_matches; // results saved here
                           // (should be {2, 8}, but always get only {2})

smatch sm;
regex_search(str, sm, rx);
for (int i=0; i<sm.size(); i++)
    index_matches.push_back(sm.position(i));
    return 0;
}
