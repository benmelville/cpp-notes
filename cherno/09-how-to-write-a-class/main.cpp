#include <iostream>

// Note this is bad code
class Log
{
public:

  enum Level 
  {
  LevelError   = 0,
  LevelWarning = 1,
  LevelTrace   = 2
  };

private:
  int Log_Level_ = LevelTrace;

public:
  void SetLevel(Level level)
  {
    Log_Level_ = level;
  }
  
  void Error(const char* message)
  {
    if (Log_Level_ >= LevelError)
      std::cout << "[ERROR]: " << message << std::endl;
  }
  void Warn(const char* message)
  {
    if (Log_Level_ >= LevelWarning)
      std::cout << "[WARNING]: " << message << std::endl;
  }
  void Trace(const char* message)
  {
    if (Log_Level_ >= LevelTrace)
      std::cout << "[TRACE]: " << message << std::endl;
  }

};

int main()
{
  Log log;
  log.SetLevel(Log::LevelError);
  log.Warn("hello");
  log.Trace("hello");
  log.Warn("ben");
}