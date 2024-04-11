#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <fstream>
using namespace std;
{
    fstream f, g;
    char a[100],b;
    int len=0;
    f.open("story.txt", ios::in|ios::out);
    
    while (f.getline(a,100))
    {

    }
    cout<<a;
    //for(len=0;a[len]!='\0';len++);
    //cout<<len;
    
    //f.open("story.txt",ios::out);
    for(int i=0;i<strlen(a);i++)
    {
        b=toupper(a[i]);
        f<<b;
    }
    f.close();
}
int main(){
void copyupper();

	fstream fin;

	fin.o  pen("story.txt",ios::in);
	fstream fout;
	fout.open("abc.TXT",ios::out);
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		ch=toupper(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();

}
 
 #include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
     ifstream fin;
     fin.open("FIRST.TXT");
     ofstream fout;
     fout.open("SECOND.TXT");
     char ch;
     while(!fin.eof())
     {
          fin.get(ch);
          if(ch>=97 && ch<=122)
          {
               ch=toupper(ch);
          }
          else if(ch>=65 && ch<=90)
          {
               ch=tolower(ch);
          }
          fout<<ch;
     }
     cout<<"\n Data has been copied";
     fin.close();
     fout.close();
     return 0;
}