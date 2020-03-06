#pragma once

#include <Windows.h>
//#include "winrt/WidgetFTServer.h"
#include "../WidgetFTServer/x64/Debug/Generated Files/winrt/WidgetFTServer.h"

namespace winrt::WidgetIPCSample::implementation
{
    WidgetFTServer::WidgetftFactory WidgetftFactoryCreate();
}
