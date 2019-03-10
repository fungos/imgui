#include "imgui.h"
#include "imgui_internal.h"

#include "imgui_richtext.h"

void ImGui::SetRichTextElementCallbacks(ImRichTextElementCalcSizeCallback calcSizeCb, ImRichTextElementDrawCallback drawCb)
{
	ImGuiContext& g = *GImGui;
	g.RichTextCalcSizeCallback = calcSizeCb;
	g.RichTextDrawCallback = drawCb;
}

void ImGui::EnableRichText()
{
	ImGuiContext& g = *GImGui;
	g.UseRichText = g.RichTextCalcSizeCallback && g.RichTextDrawCallback;
}

void ImGui::DisableRichText()
{
	ImGuiContext& g = *GImGui;
	g.UseRichText = false;
}
