#include<iostream>
#include<fstream>
#include<string>

using namespace std;

#define FILE_PATH "/home/debian/"

int main(int argc, char* argv[]){
  if(argc!=2){
    cout << endl;
    cout << "Usage is reading_file and name of file: " << endl;
    cout << " e.g reading-file" << endl;

  return 2;
  }

 string cmd(argv[1]);
 cout << endl;
 cout << endl;
 cout << "start read file" << endl;
 cout << "current file path" << FILE_PATH << endl;
 cout << endl;
 cout << endl;

 std::fstream fs;
 string line;
 string filename = "/"+ cmd;
 fs.open((FILE_PATH + filename).c_str(),std::fstream::in);
 while(getline(fs,line)) cout << line << endl;
 fs.close();

 return 0;
}

