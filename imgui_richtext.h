#pragma once

namespace ImGui
{
	typedef ImVec2(*ImRichTextElementDrawCallback)(ImVec2 pos, ImDrawList *drawlist, const char* tag_start, const char* tag_end);
	typedef ImVec2(*ImRichTextElementCalcSizeCallback)(const char* tag_start, const char *tag_end);

	IMGUI_API void          SetRichTextElementCallbacks(ImRichTextElementCalcSizeCallback calcSizeCb, ImRichTextElementDrawCallback drawCb);
	IMGUI_API void          EnableRichText();
	IMGUI_API void          DisableRichText();

	IMGUI_API void          RenderRichTextClipped(const ImVec2& pos_min, const ImVec2& pos_max, const char* text, const char* text_end, const ImVec2* text_size_if_known, const ImVec2& align = ImVec2(0, 0), const ImRect* clip_rect = NULL);
	IMGUI_API ImVec2        CalcRichTextSize(const char* text, const char* text_end = NULL, bool hide_text_after_double_hash = false, float wrap_width = -1.0f);
}
