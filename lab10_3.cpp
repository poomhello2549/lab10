#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ifstream source("score.txt");
    double num, sum = 0, sum_sq = 0;
    int count = 0;

    while (source >> num) {
        sum += num;           
        sum_sq += num * num;  
        count++;              
    }

    
    double mean = sum / count;
    double std_dev = sqrt((sum_sq / count) - pow(mean, 2));

    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << std_dev << endl;

    source.close();
    return 0;
}
