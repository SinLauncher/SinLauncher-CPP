#pragma once

#include "include/http/builder.hh"
#include <string>
#include <vector>

struct Response {
  std::string httpVersion;
  std::string httpCode;
  std::vector<Header> header;
  std::string body;
};

Response parseResponse(std::string &res);
