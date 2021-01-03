#ifndef __HTTP_SERVER_H__
#define __HTTP_SERVER_H__
#include "request.h"
#include <curl/curl.h>
#include <functional>
#include <cstdint>
// this is a very cursed library
// I *DO* not recommend this unless its for fun

namespace http 
{
	class http_server
    {
    public:
        // types
        using listener_type = std::function<void(const http::request req, http::request& res)>;
        using port_type = uint16_t;
    private:
        listener_type listener;
    public:
        http_server(const listener_type _listener);
        void listen(port_type port);
    };
}

#endif
