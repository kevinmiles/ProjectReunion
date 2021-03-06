﻿#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "App.xaml.g.h"

#pragma pop_macro("GetCurrentTime")

#include "MRM.h"
#include "winrt/Microsoft.ApplicationModel.resources.h"

namespace winrt::winui_desktop_packaged_app_cpp::implementation
{
    struct App : AppT<App>
    {
        App();

        ~App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
        void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);

    private:
        winrt::Microsoft::UI::Xaml::Window m_window{ nullptr };

        winrt::Microsoft::ApplicationModel::Resources::ResourceManager m_resourceManagerWinRT{ nullptr };
        MrmManagerHandle m_resourceManagerMrm{ nullptr };
    };
}
