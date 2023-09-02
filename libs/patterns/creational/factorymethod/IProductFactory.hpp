#ifndef _IPRODUCT_FACTORY_HPP_
#define _IPRODUCT_FACTORY_HPP_

#include "IProduct.hpp"

namespace patterns::creational::factorymethod {

class IProductFactory {
public:
	virtual IProduct* createProduct() = 0;
};

} // namespace patterns::creational::factorymethod
#endif // _IPRODUCT_FACTORY_HPP_

