#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<ctype.h>
#include "que2_header.h"
using namespace std;

string str_concat(string a,string b)
{
string c=a+b;
return c;
}

string str_copy(string a,string b)
{
b=a;
return b;
}

int str_len(string a)
{
int b= a.size();
return b;
}

bool str_isempty(string a)
{
bool var = a.empty();
return var;
}

string str_reverse(string a)
{
reverse(a.begin(),a.end());
return a;
}

int str_compare(string a,string b)
{
char array[50];
char array1[50];
strcpy(array, a.c_str());
strcpy(array1, b.c_str());
int value = strcmp(array,array1);
return value;
}

int str_returnascii(string a)
{
	
char array[50];
strcpy(array, a.c_str());
int value = int(array[0]);
return value;

}

bool str_isdigit(string a)
{
	
char array[50];
strcpy(array, a.c_str());
bool value = isdigit(array[0]);
return value;

}

bool str_equal(string a,string b)
{
	
//char array[50];
//strcpy(array, a.c_str());
bool value = (a == b);
return value;

}


int str_find(string a,string b)
{
	
//char array[50];
//strcpy(array, a.c_str());
int value = a.find(b);
return value;

}

