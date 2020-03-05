#include "pch.h"
#include "WidgetftFactoryCreate.h"
#include "../WidgetFTServer/WidgetftComFactory.h"
//#include "../WidgetFTServer/x64/Debug/Generated Files/winrt/WidgetFTServer.h"


namespace winrt::WidgetIPCSample
{
    winrt::WidgetFTServer::WidgetftFactory WidgetftFactoryCreate()
    {
        winrt::com_ptr<IActivationFactory> widgetftComFactory{};
        auto uuid = __uuidof(WidgetftComFactory);
    /*    winrt::check_hresult(CoCreateInstance(
                __uuidof(WidgetftComFactory),
                nullptr,
                CLSCTX_LOCAL_SERVER,
                __uuidof(IActivationFactory),
                reinterpret_cast<void**>(widgetftComFactory.put_void())));
    */

        winrt::hresult hr = CoCreateInstance(
            __uuidof(WidgetftComFactory),
            nullptr,
            CLSCTX_LOCAL_SERVER,
            __uuidof(IActivationFactory),
            reinterpret_cast<void**>(widgetftComFactory.put_void()));

       /* winrt::hresult obj = CoGetClassObject(__uuidof(WidgetftComFactory),
            CLSCTX_LOCAL_SERVER,
            nullptr,
            __uuidof(IActivationFactory),
            reinterpret_cast<void**>(widgetftComFactory.put_void()));*/

        winrt::com_ptr<::IInspectable> widgetftFactoryInsp;
        widgetftComFactory->ActivateInstance(widgetftFactoryInsp.put());
      auto widgetftFactoryObj = widgetftFactoryInsp.as<winrt::WidgetFTServer::WidgetftFactory>();
		return widgetftFactoryObj;
    }
}