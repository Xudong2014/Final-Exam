#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countChars(int argc, char* argv[]);
int countLine(int argc, char* argv[]);
int countLine(int argc, char* argv[])    //Takes string a parameter returns int
{
    ifstream fin(argv[1]);
    if (!fin) {
        cout << "Can't open file - " << argv[1] 
            << "\nUseage : countch filename" << endl;
        return 1;
    }
   int line=0;
   while(fin==NULL){
	line++; //Loop repeats upto null char final count returned
   }
   return line;
   cout << line << "line"<<endl;
}

int countChars(int argc, char* argv[]) //Takes string as argument and returns int
{
    ifstream fin(argv[1]);
    if (!fin) {
        cout << "Can't open file - " << argv[1] 
            << "\nUseage : countch filename" << endl;
        return 1;
    }
    
    string d;
    int count = 0;
    while ( getline(fin, d) )
        count += d.size();
    
    cout << "\n Number of Character : "<< count << endl;
}

int main(int argc, char* argv[])
{
	countChars(argc,argv);
	countLine(argc,argv);
	
}

