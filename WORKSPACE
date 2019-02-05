workspace(name = "com_github_bloggerbust_snip")

load('@bazel_tools//tools/build_defs/repo:git.bzl', 'git_repository')

git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = "6d6fd834281cb8f8e758dd9ad76df86304bf1869",
    remote = "https://github.com/nelhage/rules_boost",
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
boost_deps()

# TODO add a git repository dependency for Turtle mocks library https://github.com/mat007/turtle
# TODO add local repository to entagled

# local_repository(
#   name = "entangled",
#   path = "~/dev/entangled"
# )

# git_repository(
#     name = "rules_iota",
#     commit = "39eeaf4fad15929b0fcc88b8fc473925a6bd9060",
#     remote = "https://github.com/iotaledger/rules_iota.git",
# )
