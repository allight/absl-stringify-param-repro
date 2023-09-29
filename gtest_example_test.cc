#include <ostream>
#include "gtest/gtest.h"
#include "absl/strings/str_format.h"

namespace {
enum class Example {
  Foo, Bar,
};

template<typename Sink>
void AbslStringify(Sink& sink, const Example& e) {
  switch (e) {
    case Example::Foo: absl::Format(&sink, "Foo"); break;
    case Example::Bar: absl::Format(&sink, "Bar"); break;
  }
}
#ifdef ADD_STREAMS
std::ostream& operator<<(std::ostream& os, const Example& e) {
  return os << absl::StrFormat("%v", e);
}
#endif

class MyTestSuite : public testing::TestWithParam<Example> { };

TEST_P(MyTestSuite, Passing) {
  EXPECT_EQ(2, 1 + 1);
}
TEST_P(MyTestSuite, Failing) {
  EXPECT_NE(2, 1 + 1);
}

INSTANTIATE_TEST_SUITE_P(MyTest,
                         MyTestSuite,
                         testing::Values(Example::Foo, Example::Bar),
                         testing::PrintToStringParamName());

}
