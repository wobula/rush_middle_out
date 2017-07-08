#ifndef FOO_CLASS_HPP
# define FOO_CLASS_HPP

# include <iostream>
# include <string>
class Foo {

public:

	Foo(void);
	Foo(/* args */);
	Foo(Foo const & old);
	Foo(void);
	~Foo(void); // to be updated

	Foo			&operator=(Foo const &old);
	std::ostream	&operator<<(std::ostream &o, Foo const &c);

	void			sampleFunction(void) const;

private:

	int		_privateFoo;

};

#endif
