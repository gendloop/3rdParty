#include "pch.h"

// c++
#include <iostream>

// open3d
#include <open3d/Open3D.h>

TEST(TestCaseName, TestName) {
    using namespace open3d;

    auto pcd = std::make_shared<geometry::PointCloud>();
    pcd->points_.push_back(Eigen::Vector3d(0, 0, 0));
    
    auto mesh = geometry::TriangleMesh::CreateSphere(1.0);
    
    std::cout << "point cloud size: " << pcd->points_.size() << std::endl;
    std::cout << "vertices size: " << mesh->vertices_.size() << std::endl;
}
