#include <lddw.h>

class Sandbox : public lddw::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

lddw::Application* lddw::CreateApplication() {
	return new Sandbox();
}