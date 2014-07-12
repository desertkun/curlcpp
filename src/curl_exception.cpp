/**
 * File:   curl_exception.cpp
 * Author: Giuseppe Persico
 */

#include "curl_exception.h"

using curl::curl_exception;

// Need to define the traceback here to separate declaration from definition, or we'll get a linker error.
vector<pair<string,string>> curl::curl_exception::traceback;

// Constuctor implementation. Every call will push into the calls stack the function name and the error occurred.
curl_exception::curl_exception(const string error, const string fun_name) {
    curl_exception::traceback.insert(curl_exception::traceback.begin(),pair<string,string>(error,fun_name));
}

// Implementation of destructor.
curl_exception::~curl_exception() noexcept {
    // ... nothing to do here ...
}
