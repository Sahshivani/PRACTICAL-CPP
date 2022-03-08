# include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char*argv[])
{
    	string str="my name is shivani sah";
	    for (int c=1;c<argc;c++)
	   {
		str+=argv[c];
       }
		cout<<str<<endl;
		int freq[26]={0}; //alphabets=26
		for (int c=0; c<str.size();c++)
		{
			freq[str[c] -'a']++;
		}
		for(int c=0;c<26;c++)
		{
			cout<< char(c + 'a')<<","<< freq[c]<<endl;
		}
		return 0;
}

