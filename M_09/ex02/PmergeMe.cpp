/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:41:29 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/18 09:49:53 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe () {}
PmergeMe::PmergeMe (std::vector<int>& V, std::deque<int>& L) : unsortedVector(V), unsortedDeque(L) {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator= (const PmergeMe& other) {
	if (this != &other) {
		unsortedVector = other.unsortedVector;
		sortedVector = other.sortedVector;
		unsortedDeque = other.unsortedDeque;
		sortedDeque = other.sortedDeque;
		dequeTime = other.dequeTime;
		vectorTime = other.vectorTime;
	}
	return *this;
}


PmergeMe::PmergeMe (std::vector<int>& V) : unsortedVector(V) {
	sortedVector = unsortedVector;
	clock_t start = clock();
	sortVectorFJ(sortedVector);
	clock_t end = clock();
	vectorTime = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
}

PmergeMe::PmergeMe (std::deque<int>& D) : unsortedDeque(D) {
	sortedDeque = unsortedDeque;
	std::clock_t start = std::clock();
	sortDequeFJ(sortedDeque);
	std::clock_t end = std::clock();
	dequeTime = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
}


void PmergeMe::sortVector(std::vector<int>& vector) {
	if (vector.size() < 2)
		return ;
	size_t mid = vector.size() / 2;
	std::vector<int> left;
	std::vector<int> right;

	for (size_t i = 0; i < mid; i++) {
		left.push_back(vector[i]);
	}
	for (size_t i = mid; i < vector.size(); i++) {
		right.push_back(vector[i]);
	}
	PmergeMe::sortVector(left);
	PmergeMe::sortVector(right);

	PmergeMe::mergeVector(vector, left, right, mid, vector.size() - mid);
}

void PmergeMe::mergeVector (std::vector<int>& vector, std::vector<int>& left, std::vector<int>& right, int leftBoundary, int rightBoundary) {
	int leftIndex = 0;
	int rightIndex = 0;
	int vectorIndex = 0;

	while (leftIndex < leftBoundary && rightIndex < rightBoundary) {
		if (left[leftIndex] <= right[rightIndex])
			vector[vectorIndex++] = left[leftIndex++];
		else
			vector[vectorIndex++] = right[rightIndex++];
	}
	while (leftIndex < leftBoundary)
		vector[vectorIndex++] = left[leftIndex++];
	while (rightIndex < rightBoundary)
		vector[vectorIndex++] = right[rightIndex++];
}

// sorting with deque .
void PmergeMe::sortDeque(std::deque<int>& deque) {
	if (deque.size() < 2)
		return;

	size_t mid = deque.size() / 2;
	std::deque<int> left;
	std::deque<int> right;

	for (size_t i = 0; i < mid; i++) {
		left.push_back(deque[i]);
	}
	for (size_t i = mid; i < deque.size(); i++) {
		right.push_back(deque[i]);
	}
	PmergeMe::sortDeque(left);
	PmergeMe::sortDeque(right);

	PmergeMe::mergeDeque(deque, left, right, mid, deque.size() - mid);
}

void PmergeMe::mergeDeque(std::deque<int>& deque, std::deque<int>& left, std::deque<int>& right, int leftBoundary, int rightBoundary) {
	int leftIndex = 0;
	int rightIndex = 0;
	int dequeIndex = 0;

	while (leftIndex < leftBoundary && rightIndex < rightBoundary) {
		if (left[leftIndex] <= right[rightIndex]) {
			deque[dequeIndex++] = left[leftIndex++];
		} else {
			deque[dequeIndex++] = right[rightIndex++];
		}
	}
	while (leftIndex < leftBoundary) {
		deque[dequeIndex++] = left[leftIndex++];
	}
	while (rightIndex < rightBoundary) {
		deque[dequeIndex++] = right[rightIndex++];
	}
}

// Sorting with Ford-Johnson algorithm for std::vector
void PmergeMe::sortVectorFJ(std::vector<int> &vector)
{
	bool odd = false;
	if (vector.size() < 2) {
		return ;
	}
	size_t mid = vector.size() / 2;
	if (vector.size() % 2 != 0) {
		mid++;
	}
	for (size_t i = 0; i < vector.size() - 1; i += 2) {
		if (vector[i] > vector[i + 1]) {
			std::swap(vector[i], vector[i + 1]);
		}
	}
	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i < vector.size(); i += 2) {
		if (i < vector.size() - 1) {
			std::pair <int, int > p(vector[i + 1], vector[i]);
			pairs.push_back(p);
		} else {
			odd = true;
			std::pair <int, int > p(vector[i], vector[i]);
			pairs.push_back(p);
		}
	}
	std::vector<int > Larg;
	std::vector<int> Small;
	for (size_t i = 0; i < pairs.size(); i++) {
		Larg.push_back(pairs[i].first);
		Small.push_back(pairs[i].second);
	}
	PmergeMe::sortVectorFJ(Larg);
	if (odd == true) {
		Small.pop_back();
	}
	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i].first == Larg[0]) {
			Larg.insert (Larg.begin(), Small[i]);
			Small.erase (Small.begin() + i);
			break ;
		}
	}
	for (size_t i = 0; i < Small.size(); i++) {
		int left = 0;
		int right = Larg.size() - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (Small[i] < Larg[mid]) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		Larg.insert(Larg.begin() + left, Small[i]);
	}
	vector = Larg;
	(void)mid;
}

void PmergeMe::sortDequeFJ(std::deque<int> &deque) {
	bool odd = false;
	if (deque.size() < 2) {
		return ;
	}
	size_t mid = deque.size() / 2;
	if (deque.size() % 2 != 0) {
		mid++;
	}
	for (size_t i = 0; i < deque.size() - 1; i += 2) {
		if (deque[i] > deque[i + 1]) {
			std::swap(deque[i], deque[i + 1]);
		}
	}
	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i < deque.size(); i += 2) {
		if (i < deque.size() - 1) {
			std::pair <int, int > p(deque[i + 1], deque[i]);
			pairs.push_back(p);
		} else {
			odd = true;
			std::pair <int, int > p(deque[i], deque[i]);
			pairs.push_back(p);
		}
	}
	std::deque<int > Larg;
	std::deque<int> Small;
	for (size_t i = 0; i < pairs.size(); i++) {
		Larg.push_back(pairs[i].first);
		Small.push_back(pairs[i].second);
	}
	PmergeMe::sortDequeFJ(Larg);
	if (odd == true) {
		Small.pop_back();
	}
	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i].first == Larg[0]) {
			Larg.insert (Larg.begin(), Small[i]);
			Small.erase (Small.begin() + i);
			break ;
		}
	}
	for (size_t i = 0; i < Small.size(); i++) {
		int left = 0;
		int right = Larg.size() - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (Small[i] < Larg[mid]) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		Larg.insert(Larg.begin() + left, Small[i]);
	}
	deque = Larg;
	(void)mid;
}


// Geters.
std::vector<int> PmergeMe::getUnsortedVector () const {
	return (unsortedVector);
}
std::vector<int> PmergeMe::getSortedVector () const {
	return (sortedVector);
}
std::deque<int> PmergeMe::getUnsortedDeque () const {
	return (unsortedDeque);
}
std::deque<int> PmergeMe::getSortedDeque () const {
	return (sortedDeque);
}
double PmergeMe::getVectorTime() const {
	return (vectorTime);
}
double PmergeMe::getDequeTime() const {
	return (dequeTime);
}

PmergeMe::~PmergeMe () {}
