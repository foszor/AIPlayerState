#pragma once

#include "ModuleManager.h"

class FAIPlayerStateModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
