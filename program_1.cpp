#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ifstream fin("data.txt"); //opening text file
    int count=0;
    char ch[20],c[20] = "the";
    
    while(fin)
    {
      fin>>ch;
      if(strcmp(ch,c)==0) { count++; }
    }
    
    cout<<"Occurrence="<<count<<"\n";
    fin.close(); //closing file
    
    return 0;
}
