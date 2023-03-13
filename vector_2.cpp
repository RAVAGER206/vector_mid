#include <iostream>
#include <string>
#include <vector>
#include "middle_list.h"
using namespace std;


long itc_sum_even_lst(const vector <int> &lst) // 6 -- itc_sum_even_lst
{
long sum;
for (int i = 1; i < lst.size(); i += 2)
sum += lst[i];
return sum;
} // end


long itc_sum_even_part_lst(const vector <int> &lst) // 7 -- itc_sum_even_part_lst
{
long sum;
for (int i = 0; i < lst.size(); i++)
if(lst[i] % 2 == 0)
sum += lst[i];
return sum;
} // end


long itc_sum_not_even_part_lst(const vector <int> &lst) // 8 -- long itc_sum_not_even_part_lst
{
long sum;
for (int i = 0; i < lst.size(); i++)
if(lst[i] % 2 != 1)
sum += lst[i];
return sum;
} // end


void itc_pos_neg_separator_lst(const vector <int> lst, vector <int> lst1, vector <int> lst2, vector <int> lst3) // 9 -- itc_pos_neg_separator_lst
{
int ch;
for (int i = 0; i < lst.size(); i++)
{
ch = lst[i];
if (ch < 0)
lst1.push_back(ch);
if (ch > 0)
lst2.push_back(ch);
if (ch == 0)
lst3.push_back(ch);
}
} // end
