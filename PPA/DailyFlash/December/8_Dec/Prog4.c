
#include<stdio.h>
#define pi 3.142

struct Sphere {

	float radius;
}sph = {3};

struct Cone {

	float radius;
	float height;
}con = {2,30};

struct Cylinder {

	float radius;
	float height;

}cylin = {3,20};

void sphereVol(struct Sphere obj1) {
	
	printf("Volume of Sphere is : %f\n",(4*pi*obj1.radius*obj1.radius*obj1.radius)/3);
}

void coneVol(struct Cone obj2) {

	printf("Volume of Cone is : %f\n",(pi*obj2.radius*obj2.radius*obj2.height)/3);
}

void cylinderVol(struct Cylinder obj3) {

	printf("Volume of Cylinder is : %f\n",pi*obj3.radius*obj3.radius*obj3.height);
}

void main() {

	sphereVol(sph);
	coneVol(con);
	cylinderVol(cylin);

}
