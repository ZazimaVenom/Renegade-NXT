#include "Modules/ModuleManager.h"

class FRenegadeSplineAIModule final : public IModuleInterface
{
public:
    virtual void StartupModule() override {}
    virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(FRenegadeSplineAIModule, RenegadeSplineAI)
