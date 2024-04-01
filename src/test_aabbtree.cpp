#include "aabbtree.h"
#include<iostream>

int main()
{

    float3 p1 = make_float3(0.0, 0.0, 0.0);
    float3 p2 = make_float3(1.0, 0.0, 0.0);
    float3 p3 = make_float3(0.0, 1.0, 0.0);
    float3 p4 = make_float3(0.0, 0.0, 1.0);

    Triangle t1(p1, p2, p3);
    Triangle t2(p1, p2, p4);
    Triangle t3(p1, p3, p4);
    Triangle t4(p2, p3, p4);

    std::vector<Triangle> triangles{t1, t2, t3, t4};

    AABBTree *aabbtree = new AABBTree(triangles);
    
}