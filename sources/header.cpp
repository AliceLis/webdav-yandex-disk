#include "header.hpp"

#include <curl/curl.h>

namespace WebDAV {
	Header::Header(const std::initializer_list<std::string>& init_list) noexcept : handle(nullptr) {
		for (auto& item : init_list) {
			this->append(item);
		}
	}

	Header::~Header() {
		curl_slist_free_all((curl_slist*)this->handle);
	}

	void
		Header::append(const std::string& item) noexcept {
		this->handle = curl_slist_append((curl_slist*)this->handle, item.c_str());
	}
}