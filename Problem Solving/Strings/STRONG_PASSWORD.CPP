#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

// FROM HERE


int minimumNumber(int n, string pa) {
    // Return the minimum number of characters to make the password strong
int dig=0,low=0,upe=0,spe=0;



for(int i=0;i<n;i++)
{  
    if(isdigit(pa[i]))
    {
        dig=1;
    }
    else if(isupper(pa[i]))
    {
        upe=1;
    }
    
    else if(islower(pa[i]))
    {
     low=1;   
    }
    else spe=1;
}
int ren = 4-(dig+upe+low+spe);

if(n+ren<6) return 6-n;
else return ren;

}



//TILL HERE

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
