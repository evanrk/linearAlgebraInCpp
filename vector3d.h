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
    Vector3d cross(Vector3d otherVec){
        double newX = x * otherVec.y - x * otherVec.z;
        double newY = y * otherVec.z - y * otherVec.x;
        double newZ = z * otherVec.x - z * otherVec.y;

        return Vector3d newVec(newX, newY, newZ); 
    } 
};
#endif //UNTITLED_VECTOR3D_H
