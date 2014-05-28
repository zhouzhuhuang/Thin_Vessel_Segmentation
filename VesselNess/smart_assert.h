/* Smart Assertion
 *  - Show assertion under debug mode
 *  - Print assertion message udner release mode
 *
 * Created by Yuchen on Apr 30th, 2013
 * Last Modified by Yuchen on Jul 2nd, 2013
 *
 * Example:
	Code:
		int i = -1;
		smart_assert(i>=0 && i<3, "Index out of bound" );
	Output:
		Assertion failed: i>0 && i<3
		  Messages: Index out of bound
		  Location: file main.cpp, line 17
 */
#ifndef SMART_ASSERT_H
#define SMART_ASSERT_H
#include <assert.h>
#include <iostream>

#define smart_assert( condition, message ) \
	if( !(condition) ) { \
        std::cout << message << std::endl; \
		assert( condition ); \
		system("pause"); \
		exit(0); \
	}

#define smart_return_value( condition, message, return_value ) \
	if( !(condition) ) { \
		std::cout << message << std::endl; \
		system("pause"); \
		return (return_value); \
	}


#define smart_return_false( condition, message ) \
	if( !(condition) ) { \
        std::cout << message << std::endl; \
		system("pause");  \
		return false; \
	}


#define smart_return( condition, message ) if( !(condition) ) { \
    system("pause"); \
		std::cout << message << std::endl; \
		return ; \
	}

#endif
