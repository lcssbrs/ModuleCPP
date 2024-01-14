/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:04:42 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/14 14:38:57 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        MutantStack() {};
        MutantStack(MutantStack const & other):std::stack<T>(other) {};
        ~MutantStack()
		{
            this->c.clear();
        };

        MutantStack & operator=(MutantStack const & obj)
		{
            if (obj != *this)
			{
                this->c = obj.c;
            }
            return *this;
        };


        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif
