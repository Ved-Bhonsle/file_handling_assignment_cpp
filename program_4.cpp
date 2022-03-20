#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
    ifstream file;
    int words_ends_with_s=0;
    string temp;

    file.open("data.txt");

    if(!file){
        cout<<"cannot open the file"<<endl;
    }
    else{
        while(!file.eof()) {
            file >> temp;
            if(temp[temp.length()-1]=='s'){
                words_ends_with_s++;
            }
            
        }
        cout<<"number of words that end with s: "<<words_ends_with_s<<endl;
    }

    file.close();

    return 0;
}
