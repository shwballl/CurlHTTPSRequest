#include <iostream>
#include <curl/curl.h>
#include <fstream>


int main(int argc, const char** argv) {

    CURL *curl;
    CURLcode res;
    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();
    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");

        res = curl_easy_perform(curl);

        std::cout << res << std::endl;

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();

    return 0;
}