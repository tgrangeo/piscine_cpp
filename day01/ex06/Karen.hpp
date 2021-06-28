#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

#define DEBUG	0;
#define INFO	1;
#define WARNING	2;
#define ERROR	3;

class Karen{

	public:
	//constructor and destructor
		Karen(void);
		~Karen(void);
	//other
		void complain(std::string level);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

};

#endif
