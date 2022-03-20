#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
    ifstream file;
    int words_with_a=0;
    string temp;
  
    file.open("data.txt");
        int sam=0;
        while(!file.eof()) 
        {
            file >> temp; 
           for(int i=0; i<temp.length(); i++)
           {
            if(temp[i] == 'a'){
                sam++;
            }
        }
        if(sam>0){
            words_with_a++;
            sam=0;
        }        
    }
    cout << "Number of word with a: " << words_with_a << endl;
    file.close();
  
    return 0;
}
