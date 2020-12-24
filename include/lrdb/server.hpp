#pragma once

#if __cplusplus >= 201103L || (defined(_MSC_VER) && _MSC_VER >= 1800)
#include <memory>
#include <utility>
#include <vector>

#include "basic_server.hpp"

#ifdef EMSCRIPTEN
#include "command_stream/node_childprocess_emscripten.hpp"
#else
#include "command_stream/socket.hpp"
#endif

namespace lrdb {
typedef basic_server<command_stream_socket> server;
}

#else
#error Needs at least a C++11 compiler
#endif