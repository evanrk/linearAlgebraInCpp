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
};
#endif //UNTITLED_VECTOR3D_H
