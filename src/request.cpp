#include "request.h"

namespace http
{
    request::request(CURLM* _curl_handle)
    {
        this->curl_handle = _curl_handle;
    }
    bool request::write_head(http_code_type code, http_header headers)
    {
        
        return false;
    }
}
