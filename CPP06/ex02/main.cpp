#include "A/A.hpp"
#include "B/B.hpp"
#include "C/C.hpp"
#include "Base/Base.hpp"

# define GENERATE_LOG true

static Base	*generate(void)
{
	n_int	i;
	Base	*b;

	std::srand(std::time(NULL));
	i = std::rand() % 3;
	switch (i)
	{
	case 1:
		if (GENERATE_LOG)
			cout << "B" << endl;
		b = new	B();
		break;
	case 2:
		if (GENERATE_LOG)
			cout << "C" << endl;
		b = new C();
		break;
	default:
		if (GENERATE_LOG)
			cout << "A" << endl;
		b = new A();
		break;
	}
	return (b);
}

static void	identify(Base *p)
{
	Base	*base_ptr;

	base_ptr = NULL;
	base_ptr = dynamic_cast<A *>(p);
	if (base_ptr)
		cout << "A" << endl;
	base_ptr = dynamic_cast<B *>(p);
	if (base_ptr)
		cout << "B" << endl;
	base_ptr = dynamic_cast<C *>(p);
	if (base_ptr)
		cout << "C" << endl;
}

static void	identify(Base &p)
{

	try
	{
		Base &base_ptr = dynamic_cast<A &>(p);
		cout << "A" << endl;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		Base &base_ptr = dynamic_cast<B &>(p);
		cout << "B" << endl;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		Base &base_ptr = dynamic_cast<C &>(p);
		cout << "C" << endl;
	}
	catch (std::exception &e)
	{
	}
}

int		main(void)
{
	Base	*b;

	b = generate();
	Base	&b_ref = *b;
	identify(b);
	identify(b_ref);
	delete (b);
}
