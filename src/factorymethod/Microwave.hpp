#ifndef _MICROWAVE_HPP_
#define _MICROWAVE_HPP_

#include <creational/factorymethod/IProduct.hpp>

using namespace patterns::creational::factorymethod;

namespace factorymethod {

class Microwave : public IProduct {
public:
	Microwave();

	void run() override;
};

} // namespace factorymethod
#endif // _MICROWAVE_HPP_

