#include<iostream>
#include<fstream>
#include<string>

using namespace std;

#define FILE_PATH "/home/debian/"

int main(int argc, char* argv[]){
  if (argc!=2){
    cout << "Using to write a file" << endl;
    return 2;
  }
   string cmd(argv[1]);
   cout << endl;
   cout << endl;
   cout << "starting file write" << endl;
   cout << " current file: " << FILE_PATH << endl;
  
  std::fstream fs;
  string path(FILE_PATH);
  fs.open((path+"/"+cmd).c_str(), std::fstream::out);
  fs << "I watched a movie." << endl;
  fs << " It sucked" << endl;
  fs.close();
  cout << "finish writing program" <<  endl;;
return 0;
}

