//
//  RotationMatrix.cpp
//  3D Math
//
//  Created by 梅宇宸 on 16/10/17.
//  Copyright © 2016年 梅宇宸. All rights reserved.
//

#include "RotationMatrix.hpp"

void RotationMatrix::identity ()
{
    m11 = 1.0f; m11 = 0.0f; m13 = 0.0f;
    m21 = 0.0f; m22 = 1.0f; m23 = 0.0f;
    m31 = 0.0f; m32 = 0.0f; m33 = 1.0f;
}

Vector3 RotationMatrix::inertial2Object (const Vector3 &v) const
{
    return Vector3 (
        m11 * v.x + m21 * v.y + m31 * v.z,
        m12 * v.x + m22 * v.y + m32 * v.z,
        m13 * v.x + m23 * v.y + m33 * v.z
    );
}

Vector3 RotationMatrix::object2Inertial (const Vector3 &v) const
{
    return Vector3 (
        m11 * v.x + m12 * v.y + m13 * v.z,
        m21 * v.x + m22 * v.y + m23 * v.z,
        m31 * v.x + m32 * v.y + m33 * v.z
    );
}