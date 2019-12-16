#include <bits/stdc++.h>

using namespace std;

void acidNaming(string ac)
{
    string a,b;
    int l=ac.length();
    a=ac.substr(0,5);
    b=ac.substr(l-2,l-1);
    if(a.compare("hydro")==0&&b.compare("ic")==0)
        cout<<"non-metal acid"<<endl;
        else if(a.compare("hydro")!=0&&b.compare("ic")==0)
        cout<<"polyatomic acid"<<endl;
        else
        cout<<"not an acid"<<endl;
}
int main()
{
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string acid_name;
        cin >> acid_name;
        acidNaming(acid_name);
    }
    return 0;
}
