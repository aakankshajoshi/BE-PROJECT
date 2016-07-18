#include"que2_header.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
string str1,str2,result,str3;
cout<<"\nEnter the First string\n";
cin>>str1;
cout<<"\nSecond string";
cin>>str2;


result = str_concat(str1,str2);
cout<<"\nString after concatenation is	"<<result;

result = str_copy(str1,str2);
cout<<"\nString after copying is	"<<result;

int result1 = str_len(str1);
cout<<"\nLength of string is	"<<result1;

bool result2 = str_isempty(str3);
cout<<"\nIs the string empty	"<<result2;

result=str_reverse(str1);
cout<<"\nReversed string is	"<<result;

result1= str_compare(str1,str2);
cout<<"\nComparing strings	"<<result1;

result1 = str_returnascii(str1);
cout<<"\nThe ascii value of first character of string	"<<result1;

result2 = str_isdigit(str1);
cout<<"\nIs the first character of a string a digit	"<<result2;

result2 = str_equal(str1,str2);
cout<<"\nAre two strings equal	"<<result2;

result1 = str_find(str1,str2);
cout<<"\nIndex of occurence of string2 in string1 is	"<<result1;


return 0;


}
