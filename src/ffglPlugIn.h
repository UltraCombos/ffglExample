#ifndef INCLUDE_FFGLPLUGIN_H_
#define INCLUDE_FFGLPLUGIN_H_

#include <FFGLPluginSDK.h>

class ffglPlugIn: public CFreeFrameGLPlugin
{
public:
	ffglPlugIn();
	virtual ~ffglPlugIn();

	///////////////////////////////////////////////////
	// FreeFrame plugin methods
	///////////////////////////////////////////////////

	FFResult	InitGL(const FFGLViewportStruct *vp) override;
	FFResult	DeInitGL() override;
	FFResult 	ProcessOpenGL(ProcessOpenGLStruct* pGL) override;

	FFResult	SetFloatParameter(unsigned int dwIndex, float value) override;
	float		GetFloatParameter(unsigned int index) override;
	FFResult	SetTextParameter(unsigned int index, const char *value) override ;
	char*		GetTextParameter(unsigned int index) override;
	char const* GetShortName() override;

	///////////////////////////////////////////////////
	// Factory method
	///////////////////////////////////////////////////

	static FFResult __stdcall CreateInstance(CFreeFrameGLPlugin **ppInstance);

};

#endif//INCLUDE_FFGLPLUGIN_H_
