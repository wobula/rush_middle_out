#include <iostream>
#include <string>
#include "Foo.class.hpp"

Foo::Foo(void) : _privateFoo(0) {
	std::cout << "Foo Default Constructor" << std::endl;
	return;
}

Foo::Foo(/*args*/) : _privateFoo(/*args*/) {
	std::cout << "Foo Parametric Constructor" << std::endl;
	return;
}

Foo::Foo(Foo const &old) {
	std::cout << "Foo Copy Constructor" << std::endl;
	*this = old;
	return;
}

Foo::~Foo(void) {
	std::cout << "Foo Destructor" << std::endl;
	return;
}

void			Foo::sampleFunction(void) const
{
	std::cout << "Foo Sample Function" << std::endl
}

Foo				&Foo::operator=(Foo const &old)
{
	std::cout << "Foo Assignment Operator" << std::endl;
	if (this != &old)
		this->_privateFoo = old.getFoo();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Foo const &c)
{
	o << "To String Function of Foo: " << c.getFoo();
	return (o);
}
