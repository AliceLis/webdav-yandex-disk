#ifndef WEBDAV_URN_H
#define WEBDAV_URN_H
#pragma once

#include <string>

namespace WebDAV {
	class Urn {
		static const std::string separate;

		std::string m_path;

	public:

		Urn(std::string path, bool directory = false);

		Urn(std::nullptr_t);

		std::string path();

		std::string quote(void *request);

		std::string name();

		std::string parent();

		bool is_directory();

		bool is_root();

		Urn operator+(std::string resource_path);
	};
}

#endif