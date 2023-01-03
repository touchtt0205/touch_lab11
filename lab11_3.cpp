#include <iostream>
#include <iomanip>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;

int main(){
    double mean;
    double x2;
    double sum;
    int count;
    string txte;
    ifstream source("score.txt");
    while(getline(source,txte)){
        sum += atof(txte.c_str());
        x2 += pow(atof(txte.c_str()),2);
        count++;
    }
    mean = sum/count;
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sqrt((x2/count)-pow(mean,2));
}