#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Curve Fitting using Least Squares Method\n";
    cout << "-----------------------------------------\n";
    cout << "Enter number of data points: ";
    cin >> n;

    double x[50], y[50];
    double sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;

    cout << "Enter values of x and y:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i + 1 << "]: ";
        cin >> x[i];
        cout << "y[" << i + 1 << "]: ";
        cin >> y[i];

        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    double b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    double a = (sumy - b * sumx) / n;

    cout << "\nEquation of best-fit line: y = " << a << " + " << b << "x\n";

    double x_pred;
    cout << "\nEnter a value of x to predict y: ";
    cin >> x_pred;

    cout << "Predicted y = " << (a + b * x_pred) << endl;

    return 0;
}

