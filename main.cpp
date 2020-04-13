#include <iostream>
#include <math.h>
#include <string>
#include "vector2.h"
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    Vector2 v1{}, v2{};
    double s;
    /*cout << "vector1:\n";
    cin >> v1;
    cout << "vector2:\n";
    cin >> v2;
    cout << "scalar:\n";
    cin >> s;*/

    std::ifstream ifile("data.txt");
    std::ofstream ofile("data2.txt");
    std::stringstream s1;
    if (ifile){
        s1 << ifile.rdbuf();
    }
    s1 >> v1;
    s1 >> v2;
    std::stringstream s2;
    s2 << v1 << " + \n" << v2 << " = \n" << v1+v2;
    if (ofile){
        ofile << s2.rdbuf();
    }


    /*cout << "v1+v2 =  " << v1+v2 << endl;
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
    cout << v1;*/
    return 0;
}