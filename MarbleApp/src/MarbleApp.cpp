#include "Walnut/Application.h"
#include "Walnut/EntryPoint.h"
#include "Walnut/Image.h"

#include "EditorLayer.h"
#include "Marble/Logger.h"

Walnut::Application* Walnut::CreateApplication(int argc, char** argv)
{
	Marble::Logger::Init();
	MARBLE_CORE_INFO("Logger initialized.");
	
	Walnut::ApplicationSpecification spec;
	spec.Name = "Walnut Example";

	Walnut::Application* app = new Walnut::Application(spec);
	app->PushLayer<EditorLayer>();
	app->SetMenubarCallback([app]()
	{
		if (ImGui::BeginMenu("File"))
		{
			if (ImGui::MenuItem("Exit"))
			{
				app->Close();
			}
			ImGui::EndMenu();
		}
	});
	return app;
}