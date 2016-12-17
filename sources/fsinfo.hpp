#ifndef WEBDAV_FSINFO_H
#define WEBDAV_FSINFO_H
#pragma once

#include <string>
#include <fstream>

namespace WebDAV {
	namespace FileInfo {
		auto exists(const std::string& path) -> bool;

		auto size(const std::string& path_file) -> unsigned long long;
	}
}

#endif