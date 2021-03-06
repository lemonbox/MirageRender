#ifndef SPHERE_H
#define SPHERE_H

// mirage includes
#include "../core/shape.h"

namespace mirage
{

class Sphere : public virtual Shape
{
public:
    Sphere(const Transform o2w, Material *m = nullptr, vec3 c = vec3(), float r = 1.0f);
    virtual void update() override;
    virtual AABB objectBound() const override;
    virtual AABB worldBound() const override;
    virtual bool intersect(const Ray &ray, Intersection &iSect) const override;
    virtual bool intersectP(const Ray &ray) const override;
    virtual float getSurfaceArea() const override;
    vec3 getCenterInit() const;
    vec3 getCenterTransformed() const;
    float getRadiusInit() const;
    float getRadiusTransformed() const;
private:
    vec3 m_centerInit;
    vec3 m_centerTransformed;
    float m_radiusInit;
    float m_radiusTransformed;
protected:
};

}

#endif // SPHERE_H
