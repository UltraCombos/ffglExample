#include <FFGL.h>
#include <FFGLLib.h>
#include "ffglPlugIn.h"

FFResult ffglPlugIn::CreateInstance(CFreeFrameGLPlugin **ppInstance)
{
	*ppInstance = new ffglPlugIn();
	if (*ppInstance != NULL) return FF_SUCCESS;
	return FF_FAIL;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//  Plugin information
////////////////////////////////////////////////////////////////////////////////////////////////////

static CFFGLPluginInfo PluginInfo 
(
	ffglPlugIn::CreateInstance,			// Create method
	"UC01",								// Plugin unique ID
	"FFGLExample",						// Plugin name											
	1,						   			// API major version number 													
	000,								// API minor version number	
	1,									// Plugin major version number
	000,								// Plugin minor version number
	FF_SOURCE,							// Plugin type
	"Example FFGL plugin",				// Plugin description
	"Created by The78ester"				// About
);


////////////////////////////////////////////////////////////////////////////////////////////////////
//  Constructor and destructor
////////////////////////////////////////////////////////////////////////////////////////////////////

ffglPlugIn::ffglPlugIn() : CFreeFrameGLPlugin()
{
	// Input properties
	SetMinInputs(1);
	SetMaxInputs(1);

	SetParamInfo(0, "bool_example",	FF_TYPE_BOOLEAN, 0.f);
	SetParamInfo(1, "event_example", FF_TYPE_EVENT,	0.f);
	SetParamInfo(2, "float_example", FF_TYPE_STANDARD, 0.5f);
	SetParamInfo(3, "text_example", FF_TYPE_TEXT, "hello world");
}

ffglPlugIn::~ffglPlugIn()
{}


FFResult ffglPlugIn::InitGL(const FFGLViewportStruct *vp)
{
	return FF_SUCCESS;
}

FFResult ffglPlugIn::DeInitGL()
{
	return FF_SUCCESS;
}

FFResult ffglPlugIn::ProcessOpenGL(ProcessOpenGLStruct *pGL)
{  
	return FF_SUCCESS;
}

FFResult ffglPlugIn::SetFloatParameter(unsigned int dwIndex, float value)
{
	return FF_SUCCESS;
}

float ffglPlugIn::GetFloatParameter(unsigned int index)
{
	return 0.f;
}

FFResult ffglPlugIn::SetTextParameter(unsigned int index, const char *value)
{
	return FF_SUCCESS;
}

char* ffglPlugIn::GetTextParameter(unsigned int index)
{
	return "";
}

char const* ffglPlugIn::GetShortName()
{
	return "FFGLExampleShortName";
}
