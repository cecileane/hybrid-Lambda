/*
 * hybrid-Lambda is used to simulate gene trees given species network under 
 * coalescent process.
 * 
 * Copyright (C) 2010 -- 2014 Sha (Joe) Zhu
 * 
 * This file is part of hybrid-Lambda.
 * 
 * hybrid-Lambda is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


/*! \file utility.hpp
 * \brief Header file for network.cpp */

#include <iostream> //std::cout
#include <string>
#include <fstream>
#include <cassert>
#include <stdexcept>
#include <sstream> //std::istringstream

//Unless compiled with options NDEBUG, we will produce a debug output using 
//'dout' instead of cout and execute (expensive) assert statements.
#ifndef NDEBUG
#define dout std::cout
#else
#pragma GCC diagnostic ignored "-Wunused-value"
#define dout 0 && std::cout
#endif

using namespace std;

#ifndef GLOBAL_H
#define GLOBAL_H	

string remove_interior_label(string in_str);
string rm_and_hash_sign(string in_str);
string rm_and_sign(string in_str);
string rm_hash_sign(string in_str);
string extract_label(string in_str, size_t i);
size_t end_of_label_or_bl(string in_str, size_t i);
//size_t hybrid_hash_index(string in_str);
void readNextStringto( string &readto , int& argc_i, int argc_, char * const* argv_ );

#endif
