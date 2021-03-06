#include <iostream>

#include "vec2d.h"

using namespace Iderwok;

int main(int argc, char** argv) {
	Vec2d<double> x_axe{150.0, 0.0};
	std::cout << "x_axe:\t" << x_axe << std::endl; 
	Vec2d<double> sp{15.0, -15.0};
	std::cout << "sp:\t" << sp << std::endl; 
	std::cout << "Vinkel mellom sp og x_axe = " << angle_deg(sp, x_axe) << std::endl;
	std::cout << " Rad vinkel mellom sp og x_axe = " << angle_rad(sp, x_axe) << std::endl;
	
	sp = {15.0, 15.0};
	std::cout << "\nsp:\t" << sp << std::endl; 
	std::cout << "Vinkel mellom sp og x_axe = " << angle_deg(sp, x_axe) << std::endl;
	std::cout << " Rad vinkel mellom sp og x_axe = " << angle_rad(sp, x_axe) << std::endl;
	
	sp = {-15.0, 15.0};
	std::cout << "\nsp:\t" << sp << std::endl; 
	std::cout << "Vinkel mellom sp og x_axe = " << angle_deg(sp, x_axe) << std::endl;
	std::cout << " Rad vinkel mellom sp og x_axe = " << angle_rad(sp, x_axe) << std::endl;
	
	sp = {-15.0, -15.0};
	std::cout << "\nsp:\t" << sp << std::endl; 
	std::cout << "Vinkel mellom sp og x_axe = " << angle_deg(sp, x_axe) << std::endl;
	std::cout << " Rad vinkel mellom sp og x_axe = " << angle_rad(sp, x_axe) << std::endl;
	

//	Vec2d<double> v1{10.0,30.0};
//	std::cout << "v1:\t" << v1 << std::endl;
//	Vec2d<double> v2{2.0, 0.0};
//	std::cout << "v2:\t" << v2 << std::endl;
//	Vec2d<double> v3{v1 + v2};
//	std::cout << "v3:\t" << v3 << std::endl;
//	Vec2d<double> spv3{v1-sp};
//	std::cout << "spv3:\t" << spv3 << std::endl;
	
//	Vec2d<double> v3
	return 0;
}


//				
//				              | 
//		[-15, -15] ->	      |		[15,-15] -> 
//		[-15, 0] ->		------------ [15, 0] ->
//		[-15, 15] ->		     |[15, 15] ->
//				     |
