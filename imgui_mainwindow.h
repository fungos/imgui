#pragma once

namespace ImGui
{
	IMGUI_API bool          BeginFakeTitleBar();
	IMGUI_API void          EndFakeTitleBar();
	IMGUI_API bool          BeginTitleMenuBar(const char *title, bool* p_open = NULL);          // create and append to a full screen title-bar with menu-bar embedded.
	IMGUI_API void          EndTitleMenuBar();                                                  // only call EndTitleMenuBar() if BeginTitleMenuBar() returns true!
}
