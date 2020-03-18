#include <iostream>
#include <math.h>
#include <string>
#include "vector2.h"
using namespace std;

int main(){
    Vector2 v1{}, v2{};
    double s;
    cout << "vector1:\n";
    cin >> v1;
    cout << "vector2:\n";
    cin >> v2;
    cout << "scalar:\n";
    cin >> s;
    cout << "v1+v2 =  " << v1+v2 << endl;
    cout << "v1-v2 =  " << v1-v2 << endl;
    cout << "s*v1 =  " << s*v1 << endl;
    cout << "v2*s =  " << v2*s << endl;
    cout << "v1/s =  " << v1/s << endl;
    cout << "v1*v2 (dot product) =  " << dot(v1, v2) << endl;
    cout << " length of v1:  " << length(v1) << endl;
    cout << "v1 normalized:  " << normalize(v1) << endl;
    v1+=v2;
    cout << v1;
    v1-=v2;
    cout << v1;
    v1*=s;
    cout << v1;
    v1/=s;
    cout << v1;
    return 0;
}