/**
 * allocate.hpp - 
 * @author: Jonathan Beard
 * @version: Tue Sep 16 20:20:06 2014
 * 
 * Copyright 2014 Jonathan Beard
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _ALLOCATE_HPP_
#define _ALLOCATE_HPP_  1


#include "kernel.hpp"
#include "port_info.hpp"
#include "fifo.hpp"
#include <set>

class Map;

class Allocate
{
public:
   Allocate( Map *map );
   virtual ~Allocate();

   virtual void run() = 0;
protected:
   void initialize( PortInfo &src, PortInfo &dst, FIFO *fifo );
   
   std::set< Kernel* > &source_kernels;
   std::set< Kernel* > &all_kernels;
};
#endif /* END _ALLOCATE_HPP_ */
