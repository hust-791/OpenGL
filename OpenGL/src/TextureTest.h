#pragma once
#include "TestBase.h"

namespace Test
{
	class TextureTest : public TestBase
	{
	public:
		TextureTest();
		virtual ~TextureTest();

		void OnUpdata(float deltaTime) override;
		void OnRender()override;
		void OnImGuiRender()override;

		virtual void OnEvent(Event& e)override;

	private:
		std::unique_ptr<Shader> m_shader;
		std::unique_ptr<VertexArray> m_VAO;
		std::unique_ptr<IndexBuffer> m_IBO;
		std::unique_ptr<IndexBuffer> m_IBO_line;
		std::unique_ptr<VertexBuffer> m_VBO;
		std::unique_ptr<Texture> m_texture;

		float m_rotation[3];
		bool  m_isAuto[3];
	};
}
