#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
    ifstream file;
    int words_with_e=0;
    string temp;
  
    file.open("data.txt");

    if(!file){
        cout<<"cannot open the file" << endl;
    }
    else{
        while(!file.eof()) {
            file >> temp;
            if(temp[0]=='e'){
                words_with_e++;
            }
            
        }
        cout<<"number of words starts with 'e': "<<words_with_e<<endl;
    }
    file.close();
  
    return 0;
}
