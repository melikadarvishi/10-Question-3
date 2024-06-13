/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


struct Point3D {

    double x, y, z;

};


Point3D getPoint() {

    Point3D p;
    cout<<"x,y,zEnter for the point:";

    cin >> p.x >> p.y >> p.z;

    return p;

}


double distance(Point3D p1, Point3D p2) {

    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));

}


bool isOnSamePlane(Point3D p1, Point3D p2, Point3D p3) {

    double area = 0.5 * ((p1.x * (p2.y * p3.z - p3.y * p2.z)) +

                        (p2.x * (p3.y * p1.z - p1.y * p3.z)) +

                        (p3.x * (p1.y * p2.z - p2.y * p1.z)));

    return fabs(area) < 0.001;

}


int main() {

    Point3D p1 = getPoint();

    Point3D p2 = getPoint();


    cout<<"\nThe distance between two points:"<<distance(p1,p2)<<endl;

    if (isOnSamePlane(p1, p2, {0, 0, 0})) {

        cout<<"Two points are on the same plane"<<endl;
    } else {

        cout<<"Two points are on different planes"<<endl;
    }


    return 0;

}

