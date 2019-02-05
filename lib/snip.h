#pragma once
#include <string>
#include <vector>

namespace Snip {
  class SnipClient {
  public:
    SnipClient() = default;

    void createTopic(const std::string&);
    std::vector<std::string> getTopics() const;

  private:
    std::vector<std::string> topics;
  };
}
