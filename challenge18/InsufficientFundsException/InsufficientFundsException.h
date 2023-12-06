#ifndef __ILLEGAL_FUNDS_EXCEPTION_H__
#define __ILLEGAL_FUNDS_EXCEPTION_H__

#include <exception>

class IllegalFundsException: public std::exception
{
public:
    IllegalFundsException() {}
	virtual const char* what() const noexcept {
		return "Insufficient Funds exception";
	}
    ~IllegalFundsException() {}
};

#endif // __ILLEGAL_FUNDS_EXCEPTION_H__
