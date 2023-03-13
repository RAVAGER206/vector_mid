#include <iostream>
#include <string>
#include <vector>
#include "middle_list.h"
using namespace std;


vector <char> itc_strlist(string str) // 1 -- itc_strlist
{
vector <char> strok;
for (int i = 0; i < str.size(); i++)
strok.push_back(str[i]);
return strok;
} // end


string itc_join(vector <char> lst, string sep) // 2 -- itc_join
{
string nstr;
nstr = "";
for (int i = 0; i < lst.size(); i++)
{
nstr = nstr + lst[i];
if(i < lst.size() - 1)
nstr += sep;
}
return nstr;
} // end


string itc_rmstrspc(string str) // 3 -- itc_rmstrspc
{
string nstr;
vector <char> vec;
for(int i = 0; i < str.size(); i++)
vec.push_back(str[i]);
for (int i = 0; i < str.size(); i++)
if(vec[i] != ' ')
nstr += vec[i];
return nstr;
} // end


string itc_rmstrchar(string str, string les) // 4 -- itc_rmstrchar
{
vector <char> zap;
string nstr;
int chek;
for(int i = 1; i < les.size(); i++)
{
zap.push_back(les[i]);
}
for (int l = 0; l < str.size(); l++)
{
chek = 1;
for(int i = 0; i < zap.size(); i++)
if (str[l] == zap[i])
chek++;
if (chek == 0)
nstr += str[l];
}
return nstr;
} // end


long itc_sumlst(const vector <int> &lst) // 5 -- itc_sumlst
{
long sum;
for (int i = 0; i < lst.size(); i++)
sum += lst[i];
return sum;
} // end
