#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED
#include <vector>
#include <string>
using namespace std;


vector <char> itc_strlist(string str); // 1 -- itc_strlist

string itc_join(vector <char> lst, string sep); // 2 -- itc_join

string itc_rmstrspc(string str); // 3 -- itc_rmstrspc

string itc_rmstrchar(string str, string les); // 4 -- itc_rmstrchar

long itc_sumlst(const vector <int> &lst); // 5 -- itc_sumlst

long itc_sum_even_lst(const vector <int> &lst); // 6 -- itc_sum_even_lst

long itc_sum_even_part_lst(const vector <int> &lst); // 8 -- itc_sum_even_part_lst

void itc_pos_neg_separator_lst(const vector <int> lst, vector <int> lst1, vector <int> lst2, vector <int> lst3); // 9 -- itc_pos_neg_separator_lst


#endif // MIDDLE_LIST_H_INCLUDED
