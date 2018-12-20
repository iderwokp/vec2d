#include <iostream>

#include "vec2d.h"

using namespace Iderwok;

int main(int argc, char** argv) {
	
	Vec2d<double> sp{3.0, 3.0};
	std::cout << "sp:\t" << sp << std::endl;
	Vec2d<double> v1{6.0,2.0};
	std::cout << "v1:\t" << v1 << std::endl;
	Vec2d<double> v2{2.0, 5.0};
	std::cout << "v2:\t" << v2 << std::endl;
	Vec2d<double> v3{v1 + v2};
	std::cout << "v3:\t" << v3 << std::endl;
	Vec2d<double> spv3{v3-sp};
	std::cout << "spv3:\t" << spv3 << std::endl;
	
//	Vec2d<double> v3
	return 0;
}
