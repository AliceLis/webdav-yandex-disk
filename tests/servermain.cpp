#include "client.hpp"
//#include <memory>
//#include <string>
//#include <cstdlib>
//#include <stdexcept>
//#include <direct.h> 
//#include <boost/filesystem.hpp>
//#include <boost/filesystem/operations.hpp>
//#include <boost/filesystem/path.hpp>
//#include "server.hpp"
//
//
//#pragma comment(lib, "libcurl.lib")
//
//int main(int argc, char * argv[]) {
//	std::ifstream config("config");
//	std::string login, password;
//	config >> login >> password;
//
//	// argv[0] - current path, where the programm runs
//	std::string disk_path = static_cast<std::string>(argv[1]);
//	std::string download_directory = static_cast<std::string>(argv[2]);
//	// options to init client
//	std::map<std::string, std::string> options;
//	WebDAV::Server::set_options(login, password, options);
//	// init client
//	std::unique_ptr<WebDAV::Client> client(WebDAV::Client::Init(options));
//	// go to directory where download files
//	_chdir(download_directory.c_str());
//
//	if ((client->check(disk_path))) {
//		if (WebDAV::Server::is_dir(disk_path)) {
//			if (disk_path != "/") {
//				boost::filesystem::create_directory(disk_path);
//				_chdir(disk_path.c_str());
//			}
//			WebDAV::Server::download(disk_path, client);
//		}
//		else {
//			client->download(disk_path, disk_path);
//		}
//	}
//	return 0;
//}