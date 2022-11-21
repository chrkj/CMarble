#include "EditorLayer.h"

void EditorLayer::OnAttach()
{
}

void EditorLayer::OnDetach()
{
}

void EditorLayer::OnUpdate(float ts)
{
}

void EditorLayer::OnUIRender()
{
	ImGui::Begin("Hello");
		ImGui::Button("Button");
	ImGui::End();

	ImGui::ShowDemoWindow();	
}
