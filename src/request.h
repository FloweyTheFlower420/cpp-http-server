#ifndef __HTTP_REQUEST_H__
#define  __HTTP_REQUEST_H__
#include <curl/curl.h>
#include <stdexcept>
#include <unordered_map>
#include <string>
#include <cstdint>
namespace http
{
    using http_header = std::unordered_map<std::string, std::string>;
    using http_code_type = uint16_t;
        
    class request
    {
        CURLM* curl_handle;
    public: 
        request(CURLM* _curl_handle);
        bool write_head(http_code_type code, http_header headers = {});
        bool write();
        bool end();
        bool destory();
    };
}


#endif
