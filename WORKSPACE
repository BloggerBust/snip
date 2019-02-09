workspace(name = "com_github_bloggerbust_snip")

load('@bazel_tools//tools/build_defs/repo:git.bzl', 'git_repository', 'new_git_repository')

git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = "2bfb03f0fc0de6d39bfe27271d406c0b81d6dcdd",
    remote = "https://github.com/nelhage/rules_boost",
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
boost_deps()

new_git_repository(
    name = "com_github_mat007_turtle",
    commit = "5c0f29012511339ba5cc2672f99a1356c5387b62",
    remote = "https://github.com/mat007/turtle.git",
    #build_file = "com_github_mat007_turtle.BUILD"
    build_file_content = """
cc_library(
    name = "turtle",
    hdrs = glob(["include/turtle/**/*.hpp"]),
    copts = ["-Iexternal/com_github_mat007_turtle/include"],
    deps = ["@boost//:test"],
    visibility = ["//visibility:public"]
)
"""
)

# TODO add local repository to entagled @org_iota_entangled
