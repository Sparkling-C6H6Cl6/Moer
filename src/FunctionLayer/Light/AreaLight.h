/**
 * @file AreaLight.h
 * @author Zhimin Fan
 * @brief Area light (abstract).
 * @version 0.1
 * @date 2022-05-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "CoreLayer/Geometry/Transform3d.h"
#include "Light.h"

class AreaLight : public Light
{
protected:
    std::shared_ptr<Transform3D> transform;

public:
    AreaLight(std::shared_ptr<Transform3D> transform3D);
};