#pragma once
#include "object3d.h"

class Triangle :public Object3D {
private:
	Vec3f a;
	Vec3f b;
	Vec3f c;
	Vec3f normal;
public:
	Triangle(Vec3f &a, Vec3f &b, Vec3f &c, Material *m);
	virtual ~Triangle();
	virtual bool intersect(const Ray &r, Hit &h, float tmin) override;
	virtual void paint() override;
};