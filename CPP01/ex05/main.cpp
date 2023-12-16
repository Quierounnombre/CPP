#include "Harl/Harl.hpp"

int		main(int argc, char **argv)
{
	Harl		h;
	std::string s;

	s = "";
	h.complain(s);
	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
}