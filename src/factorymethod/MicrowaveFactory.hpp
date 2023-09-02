#ifndef _MICROWAVE_FACTORY_HPP_
#define _MICROWAVE_FACTORY_HPP_

#include <creational/factorymethod/IProductFactory.hpp>
#include <creational/factorymethod/IProduct.hpp>
#include "Microwave.hpp"

using namespace patterns::creational::factorymethod;

namespace factorymethod {

class MicrowaveFactory : public IProductFactory {
public:

	MicrowaveFactory();
	IProduct* createProduct() override;
};

} // namespace factorymethod
#endif // _MICROWAVE_FACTORY_HPP_

