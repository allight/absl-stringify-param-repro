
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# https://github.com/bazelbuild/bazel-skylib/releases
http_archive(
    name = "bazel_skylib",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.3.0/bazel-skylib-1.3.0.tar.gz",
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.3.0/bazel-skylib-1.3.0.tar.gz",
    ],
    sha256 = "74d544d96f4a5bb630d465ca8bbcfe231e3594e5aae57e1edbf17a6eb3ca2506",
)

# LTS 20230802.1 (released 2023-09-18)
http_archive(
    name = "com_google_absl",
    urls = ["https://github.com/abseil/abseil-cpp/archive/refs/tags/20230802.1.zip"],
    strip_prefix = "abseil-cpp-20230802.1",
    sha256 = "497ebdc3a4885d9209b9bd416e8c3f71e7a1fb8af249f6c2a80b7cbeefcd7e21",
)

# V 1.14.0 (released 2023-08-02)
http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip"],
    strip_prefix = "googletest-1.14.0",
    sha256 = "1f357c27ca988c3f7c6b4bf68a9395005ac6761f034046e9dde0896e3aba00e4",
)

