//
// Created by Evan Klein on 9/29/23.
//

#ifndef UNTITLED_VECTOR3D_H
#define UNTITLED_VECTOR3D_H

# include <cmath>

class Vector3d {
public:
    double x;
    double y;
    double z;
    double mag;
    Vector3d(int xNew, int yNew, int zNew){
        x = xNew;
        y = yNew;
        z = zNew;
        mag = sqrt(x*x + y*y + z*z);
    }
    double dot(Vector3d otherVec){
        return x*otherVec.x + y*otherVec.y + z*otherVec.z;
    }
    double cross(Vector3d otherVec){
        double add = x * otherVec.y + y * otherVec.z + z * otherVec.x;
        double subtract = x * otherVec.z + y * otherVec.x + z * otherVec.x;
        return add - subtract;
    } 
};
#endif //UNTITLED_VECTOR3D_H
