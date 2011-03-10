/*********************************************************************
* Software License Agreement (BSD License)
*
*  Copyright (c) 2008, Willow Garage, Inc.
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*   * Neither the name of the Willow Garage nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/

/* Author: Ioan Sucan */

#ifndef OMPL_UTIL_MAGIC_CONSTANTS_
#define OMPL_UTIL_MAGIC_CONSTANTS_

namespace ompl
{

    /** \brief This namespace includes magic constants used in various places in OMPL.

        We strive to minimize the use of constants in the code, but at
        places, this is necessary. These constants typically do not
        have to be changed, but we chose to expose their
        functionality for the more curious user.*/
    namespace magic
    {

        /** \brief When the cell sizes for a projection are
            automatically computed, this value defines the number of
            parts into which each dimension is split. */
        static const double PROJECTION_DIMENSION_SPLITS = 20.0;


        /** \brief When no cell sizes are specified for a projection, they are inferred like so:
            1. approximate extent of projected space by taking a number of samples (the constant below)
            2. compute the cell sizes by dividing the extent by PROJECTION_DIMENSION_SPLITS */
        static const unsigned int PROJECTION_EXTENTS_SAMPLES = 100;


        /** \brief For planners: if default values are to be used for
            the maximum length of motions, this constant defines what
            fraction of the space extent (computed with
            ompl::base::SpaceInformation::getMaximumExtent()) is to be
            used as the maximum length of a motion */
        static const double MAX_MOTION_LENGTH_AS_SPACE_EXTENT_FRACTION = 0.2;

    }
}

#endif
