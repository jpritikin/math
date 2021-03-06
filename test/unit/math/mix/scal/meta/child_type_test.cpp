#include <stan/math/prim/scal/meta/child_type.hpp>
#include <test/unit/math/prim/scal/fun/promote_type_test_util.hpp>
#include <gtest/gtest.h>
#include <stan/math/rev/core.hpp>
#include <stan/math/fwd/core.hpp>

TEST(MathMeta, value_type) {
  using stan::math::child_type;
  using stan::math::fvar;
  using stan::math::var;

  expect_same_type<fvar<var>,child_type<fvar<fvar<var> > >::type>();
  expect_same_type<var,child_type<fvar<var> >::type>();
}
