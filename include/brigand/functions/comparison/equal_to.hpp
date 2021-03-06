/*==================================================================================================
  Copyright (c) 2015 Edouard Alligand and Joel Falcou

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
=================================================================================================**/
#ifndef BOOST_BRIGAND_FUNCTIONS_COMPARISON_EQUAL_TO_HPP
#define BOOST_BRIGAND_FUNCTIONS_COMPARISON_EQUAL_TO_HPP
#include <brigand/types/bool.hpp>

namespace brigand
{
  template <typename A, typename B>
  struct equal_to : bool_ < (A::value == B::value) > {};
}
#endif
