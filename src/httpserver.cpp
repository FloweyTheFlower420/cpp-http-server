#include "httpserver.h" 

namespace http
{

    http_server::http_server(const listener_type _listener)
    {
        this->listener = _listener;
        this->curl_handle = curl_multi_init();
    }
    void http_server::listen(port_type _port)
    {
        // generator a request
                
    }

    http_server::~http_server()
    {
        curl_multi_cleanup(this->curl_handle);
    }

}
