#ifndef CALL_BACK_H
#define CALL_BACK_H

#include <boost/function.hpp>
#include <vector>
#include "Channel.h"


typedef std::vector<Channel*> ChannelList;

typedef boost::function<void (int)> MessageCallBack;
typedef boost::function<void (int)> WriteMessageCallBack;
typedef boost::function<void (int)> NewConnectCallBack;
typedef boost::function<void (int)> RemoveConnectCallBack;
typedef boost::function<void ()> ThreadCB;

#endif
