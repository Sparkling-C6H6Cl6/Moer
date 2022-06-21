#pragma once

#include "Perspective.h"

class PinholeCamera : public PerspectiveCamera {
public:
    PinholeCamera() = default;
    PinholeCamera(
        const Point3d &lookFrom, 
        const Point3d &lookAt, 
        const Vec3d &up,
        double xFov,
        double aspectRatio,
        double distToFilm
    ) : PerspectiveCamera(lookFrom, lookAt, up, xFov, aspectRatio, distToFilm) { }

    /**
     * @brief 
     * ! Notice, NDC is the sample in unit square
     * @param NDC 
     * @return Ray 
     */
    virtual Ray generateRay(Point2d NDC) const;

    virtual Ray generateRay(Point2d NDC, Point2d sample) const;
};