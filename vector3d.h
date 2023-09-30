//
// Created by Evan Klein on 9/29/23.
//

#ifndef UNTITLED_VECTOR3D_H
#define UNTITLED_VECTOR3D_H

#include <cmath>
#include <string>

class Vector3d {
public:
    double x;
    double y;
    double z;
    double mag;
    Vector3d(double xNew, double yNew, double zNew){
        x = xNew;
        y = yNew;
        z = zNew;
        mag = sqrt(x*x + y*y + z*z);
    }
    double dot(Vector3d otherVec){
        return x*otherVec.x + y*otherVec.y + z*otherVec.z;
    }
    Vector3d cross(Vector3d otherVec){
        double newX = y * otherVec.z - z * otherVec.y;
        double newY = z * otherVec.x - x * otherVec.z;
        double newZ = x * otherVec.y - y * otherVec.x;

        Vector3d newVec(newX, newY, newZ);

        return newVec;
    } 

    std::string to_string(){
        return std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z);
    }
};
#endif //UNTITLED_VECTOR3D_H
