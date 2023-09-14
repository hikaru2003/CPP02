/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:30:33 by hikaru            #+#    #+#             */
/*   Updated: 2023/08/13 12:49:22 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
private:
	int fp_number_;
	static const int bits_ = 8;
	
public:
	// constructor
	Fixed();
	// destructor
	~Fixed();
	// copy constructor
	Fixed(const Fixed &fixed);
	// copy assignment operator
	Fixed &operator=(const Fixed &fixed);
	
	// method
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};
