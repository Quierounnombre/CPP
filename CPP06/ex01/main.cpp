#include "Serializer/Serializer.hpp"

static void	put_data(Data *d)
{
	cout << "--------------------------" << endl;
	cout << "BALANCE: " << d->balance << endl;	
	cout << "NAME: " << d->name << endl;
	cout << "HASH: " << d->hash << endl;
	cout << "--------------------------" << endl;
}

int		main(void)
{
	Data		*d;
	uintptr_t	p;

	d->balance = -1000;
	d->name = "Vicente";
	d->hash = reinterpret_cast<uintptr_t>(d);

	put_data(d);
	cout << "og: " << d << endl;
	p = Serializer::serialize(d);
	cout << "cast: " << p << endl;
	d = Serializer::deserialize(p);
	cout << "og: " << d << endl;
	put_data(d);
	return 0;
}
