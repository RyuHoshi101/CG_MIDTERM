#include "Header/Scene.h"

void Scene::InitScene()
{
	m_sceneReg = new entt::registry;

	ECS::AttachRegistry(m_sceneReg);
	
	ECS::Create(0);
	ECS::Add<Camera>(0);
	ECS::Get<Camera>(0).SetPosition(glm::vec3(0, 0, 3));
	ECS::Get<Camera>(0).LookAt(glm::vec3(0.0f, 1, 0));
	ECS::Get<Camera>(0).SetUp(glm::vec3(0, 0, 1));
	ECS::Get<Camera>(0).SetFovDegrees(90.f);

	ECS::Create(1);
	ECS::Add<Mesh>(1);
	ECS::Get<Mesh>(1).TestLoadFromFile();
	
	ECS::Create(2);
	ECS::Add<Mesh>(2);
	ECS::Get<Mesh>(2).LoadOBJ("Models/cube.obj");
	
}

void Scene::Update()
{
	
}