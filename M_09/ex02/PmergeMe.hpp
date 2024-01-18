/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:41:34 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/18 09:41:35 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <list>
#include <vector>
#include <deque>
#include <time.h>
#include <stdlib.h>
#include <exception>
#include <ctime>
#include <climits>

class PmergeMe {
    private :
		std::vector<int> unsortedVector;

		std::vector<int> sortedVector;
		std::deque<int> unsortedDeque;
		std::deque<int> sortedDeque;
		double dequeTime;
		double vectorTime;

	public :
		PmergeMe ();
		PmergeMe (std::vector<int>& V, std::deque<int>& L);

		PmergeMe (std::vector<int>& V);

		PmergeMe (std::deque<int>& D);

		PmergeMe(const PmergeMe& other);

		PmergeMe& operator= (const PmergeMe& other);

		void sortVector(std::vector<int>& vector);

		void mergeVector (std::vector<int>& vector, std::vector<int>& left, std::vector<int>& right, int leftBoundary, int rightBoundary);

		// sorting with deque .
		void sortDeque(std::deque<int>& deque) ;

		void mergeDeque(std::deque<int>& deque, std::deque<int>& left, std::deque<int>& right, int leftBoundary, int rightBoundary) ;

		// Geters
		std::vector<int> getUnsortedVector () const;
		std::vector<int> getSortedVector () const;
		std::deque<int> getUnsortedDeque () const;
		std::deque<int> getSortedDeque () const;
		double getVectorTime() const;
		double getDequeTime() const;


		// Sorting with Ford-Johnson algorithm for std::vector
		void sortVectorFJ(std::vector<int> &vector);


		// Sorting with Ford-Johnson algorithm for std::deque
		void sortDequeFJ(std::deque<int> &deque);

		~PmergeMe ();
};


