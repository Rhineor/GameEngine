#include <GameEngine.h>

class Sandbox : public GameEngine::Application
{
public:
  Sandbox()
  {
    // TODO
  }

  ~Sandbox()
  {
    // TODO
  }
};


GameEngine::Application* GameEngine::CreateApplication()
{
  return new Sandbox();
}