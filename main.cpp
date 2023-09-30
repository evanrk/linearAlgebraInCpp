#include <iostream>
#include "vector3d.h"

using namespace std;

int main(){
    Vector3d vec(1, 1, 1);
    Vector3d vec2(1, 1, 0);

    // cout << vec.cross(vec2).to_string() << endl;

    cout << vec.projection(vec2).to_string() << endl;

    return 0;
}
