#include<iostream>
#include<cstdlib>

using namespace std;
int main(int argc,char *argv[]){
    
    float x = 0.0;
    if(argc == 1){
        cout << "Please input numbers to find average." << endl;
    }else {
    cout << "---------------------------------" <<endl;
    cout << "Average of " << argc-1 << " numbers = ";
    for(int i=1; i<argc; i++){
        x += atof(argv[i])  ;
    }
    cout << x/(argc-1) << endl;
    cout <<"---------------------------------" <<endl;
    }
    
}