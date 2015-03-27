#pragma once
#include <string>
#include <stdint.h>
#include <vector>

struct Il2CppArray;

namespace il2cpp
{
namespace os
{

class Environment
{
public:
	static std::string GetMachineName();
	static int32_t GetProcessorCount();
	static std::string GetOsVersionString();
	static std::string GetOsUserName();
	static std::string GetEnvironmentVariable(const std::string& name);
	static void SetEnvironmentVariable(const std::string& name, const std::string& value);
	static std::vector<std::string> GetEnvironmentVariableNames();
	static std::string GetHomeDirectory ();
	static std::vector<std::string> GetLogicalDrives ();
	static void Exit(int result);
};

}
}
