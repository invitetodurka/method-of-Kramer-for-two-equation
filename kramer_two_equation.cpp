#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;
    double det, det_x, det_y;

    cin >> a >> b >> c >> d >> e >> f;

    det = a * d - b * c;
    det_x = e * d - b * f;
    det_y = a * f - e * c;

    if (det != 0) {
        cout << 2 << " " << det_x / det << " " << det_y / det;
    }
    else {
        /*if (a * b * c * d != 0){
            if (det_x == 0){
                cout << 1 << " " << -a / b << " " << e / b;
            }
            else{
                cout << 0;
            }
        }*/
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            if (e == 0 && f == 0) {
                cout << 5;
            }
            else {
                cout << 0;
            }
        }
        else if (a == 0 && c == 0) {
            if (det_x == 0) {
                //cout << 4 << " " << (e + f) / (b + d);
                if (b == -d) {
                    cout << 4 << " " << (e - f) / (b - d);
                }
                else {
                    cout << 4 << " " << (e + f) / (b + d);
                }
            }
            else {
                cout << 0;
            }
        }
        else if (b == 0 && d == 0) {
            if (det_y == 0) {
                //cout << 3 << " " << (e + f) / (a + c);
                if (a == -c) {
                    cout << 3 << " " << (e - f) / (a - c);
                }
                else {
                    cout << 3 << " " << (e + f) / (a + c);
                }
            }
            else {
                cout << 0;
            }
        }
        else {
            if (det_x != 0) {
                cout << 0;
            }
            else {
                if (b == -d) {
                    cout << 1 << " " << -(a - c) / (b - d) << " " << (e - f) / (b - d);
                }
                else {
                    cout << 1 << " " << -(a + c) / (b + d) << " " << (e + f) / (b + d);
                }
            }
            //cout << 1 << -(a + c) / (b + d) << " " << (e + f) / (b + d);
        }
    }
    return 0;
}