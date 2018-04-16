#pragma once

#include <map>

#include "weave.h"

class European4in1 : public Weave
{
public:
    European4in1(float radius = 1.0, float thickness = 0.278)
        : radius(radius)
        , thickness(thickness)
    {
    }

    void addRing(const Eigen::Vector2f &worldClickLoc,
                 std::shared_ptr<MailleInlay> inlay);

private:
    std::tuple<int, int, int> nearestRing(const Eigen::Vector2f &loc);
    float radius;
    float thickness;

    // Rings are indexed by a 3-tuple (layer, x, y). Valid layers are 0 and 1.
    std::map<std::tuple<int, int, int>, std::shared_ptr<Torus>> rings;
};
