#include <stdexcept>
#include "snip.h"

using namespace std;

namespace Snip {
  void SnipClient::createTopic(const string& topic){
    topics.push_back(topic);
  }
        
  vector<string> SnipClient::getTopics() const{
    return topics;
  }
}
