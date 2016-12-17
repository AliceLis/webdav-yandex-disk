#ifndef WEBDAV_HEADER_H
#define WEBDAV_HEADER_H
#pragma once

#include <string>
#include <initializer_list>

namespace WebDAV {
	class Header final {
	public:
		void * handle;

		Header(const std::initializer_list<std::string>& init_list) noexcept;
		~Header();

		void append(const std::string& item) noexcept;
	};
}

#endif