#pragma once
#include<cmath>
#include <Eigen/Dense>
#include "../geometry/Point.hpp"

using namespace Eigen;
 
namespace calibration
{

//
template<class Precision = double , size_t Resolution, size_t fps>
class Camera
{
public:

    // Default Constructor 
    Camera();


    // given a point in world frame  computes its coordianates in image frame x y
    Point2<Precision> world2image(const Point3<Precision>& pt3){

    };

    // estimate the camera intrins paramters R and T from N sampled image points
    // (xi, yi) in the image frame and their correspending (Xi, Yi, Zi ) in the world frame


    // get the camera aspec ratio
    Precision aspectRatio(){
        return aspectRatio;
    }


private:

    // camera intrinsp paramters 
    Matrix<Precision, 3, 3>   R;
    Matrix<Precision, 3, 1>   T;
    Precision                 aspectRatio; // sy/sx 
    Precision                 k1; // radial distoration coefficent
    Precision                 fx; // length in effective horizontal pixel size, focal length  
    geometry::Point2<Precision> center ; // image center coordiantes 








}; // class Camera 
} // namespace calibration
    
    
 

 






