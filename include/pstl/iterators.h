/*
    Copyright (c) 2017-2018 Intel Corporation

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.




*/

#ifndef __PSTL_iterators_H
#define __PSTL_iterators_H

#include <tbb/tbb_stddef.h>

#if TBB_VERSION_MAJOR < 2019
#error Threading Building Blocks (TBB) 2019 is required for usage of special iterator types
#else

#include <tbb/iterators.h>

namespace pstl
{
using tbb::counting_iterator;
using tbb::make_transform_iterator;
using tbb::make_zip_iterator;
using tbb::transform_iterator;
using tbb::zip_iterator;
} //namespace pstl

#endif //TBB_VERSION_MAJOR < 2019

#endif /* __PSTL_iterators_H */
