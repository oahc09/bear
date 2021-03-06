/*
  Copyright (C) 2012 Stuffomatic Ltd. <contact@stuff-o-matic.com>

  All rights reserved.

  See the accompanying license file for details about usage, modification and
  distribution of this file.
*/
/**
 * \file
 * \brief A model is a group of animations and sounds.
 * \author Julien Jorge
 */
#ifndef __ENGINE_MODEL_ANIMATION_HPP__
#define __ENGINE_MODEL_ANIMATION_HPP__

#include "visual/animation.hpp"
#include <claw/smart_ptr.hpp>

namespace bear
{
  namespace engine
  {
    /** \brief An animation shared by all the actions and marks of a model. */
    typedef claw::memory::smart_ptr<visual::animation> model_animation;

  } // namespace engine

} // namespace bear

#endif // __ENGINE_MODEL_ANIMATION_HPP__
