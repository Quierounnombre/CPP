#include "Span.hpp"

#pragma region CONSTRUCTOR

void	Span::constructor_log(string s)
{
	if (_do_log)
	{
		cout << SPAN_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << SPAN_RESET_COLOR << endl;
	}
}

Span::Span(u_int n) :
_do_log(SPAN_DEFAULT_DO_LOG),
_max_size(n)
{
	constructor_log(SPAN_DEFAULT_CONSTRUCTOR_LOG);
}

Span::Span(u_int n, bool log) :
_do_log(log),
_max_size(n)
{
	constructor_log(SPAN_DEFAULT_CONSTRUCTOR_LOG);
}

Span::~Span()
{
	constructor_log(SPAN_DESTRUCTOR_LOG);
}

Span::Span(const Span &Span) :
_do_log(Span._do_log),
_max_size(Span._max_size),
_stored(Span._stored)
{
	constructor_log(SPAN_COPY_CONSTRUCTOR_LOG);
}

Span & Span::operator= (const Span &Span)
{
	constructor_log(SPAN_COPY_ASSIGNMENT_LOG);
	if (this != & Span)
	{
	}
	this->_do_log = Span._do_log;
	this->_stored = Span._stored;
	this->_max_size = Span._max_size;
	return (*this);
}

#pragma endregion

#pragma region OVERLOADS

std::ostream &operator<<(std::ostream &out, Span &f)
{
	f.represent_span();
	return (out);
}

#pragma endregion