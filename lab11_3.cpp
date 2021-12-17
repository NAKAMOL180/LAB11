#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string X;
    int i = 0;
    float sum1 = 0.0,sum2 = 0.0;
    while(getline(score,X)){
        sum1 = sum1 + stof(X.c_str());
        sum2 = sum2 + stof(X.c_str())*stof(X.c_str());
        i++;
    }

    float mean,mu2,sd;
    mean = sum1/i;
    mu2 = sum2/i;
    sd = sqrt(mu2 - pow(mean,2));

    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = " << sd;
}
