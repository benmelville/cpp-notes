#include <iostream>

// Note this is bad code
class Log
{
public:
  const int LogLevelError   = 0;
  const int LogLevelWarning = 1;
  const int LogLevelTrace   = 2;


private:
  int Log_Level_ = LogLevelTrace;

public:
  void SetLevel(int level)
  {
    Log_Level_ = level;
  }
  
  void Error(const char* message)
  {
    if (Log_Level_ >= LogLevelError)
      std::cout << "[ERROR]: " << message << std::endl;
  }
  void Warn(const char* message)
  {
    if (Log_Level_ >= LogLevelWarning)
      std::cout << "[WARNING]: " << message << std::endl;
  }
  void Trace(const char* message)
  {
    if (Log_Level_ >= LogLevelTrace)
      std::cout << "[TRACE]: " << message << std::endl;
  }

};

int main()
{
  Log log;
  log.SetLevel(log.LogLevelTrace);
  log.Warn("hello");
  log.Trace("hello");
  log.Warn("ben");
}