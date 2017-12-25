// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "vtkAutoInit.h"
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingFreeType);
VTK_MODULE_INIT(vtkRenderingOpenGL);
VTK_MODULE_INIT(vtkRenderingVolumeOpenGL);

#pragma comment (lib, "vtkCommonCore-6.3.lib")
#pragma comment (lib, "vtkCommonDataModel-6.3.lib")
#pragma comment (lib, "vtkCommonExecutionModel-6.3.lib")
#pragma comment (lib,  "vtkCommonTransforms-6.3.lib")
#pragma comment (lib, "vtkFiltersCore-6.3.lib")
#pragma comment (lib, "vtkFiltersSources-6.3.lib")
#pragma comment (lib, "vtkRenderingCore-6.3.lib")
#pragma comment (lib, "vtkRenderingOpenGL-6.3.lib")
#pragma comment (lib, "vtkRenderingVolumeOpenGL-6.3.lib")
#pragma comment (lib, "vtkViewsCore-6.3.lib")
#pragma comment (lib, "vtkInteractionStyle-6.3.lib")
#pragma comment (lib, "vtkRenderingFreeType-6.3.lib")

#pragma comment (lib,"vtkFiltersExtraction-6.3.lib")
#pragma comment (lib,"vtkRenderingAnnotation-6.3.lib")
#pragma comment (lib,"vtkInteractionWidgets-6.3.lib")
#pragma comment (lib,"vtkRenderingLabel-6.3.lib")
#pragma comment (lib,"vtkIOImage-6.3.lib")
#pragma comment (lib,"vtkFiltersTexture-6.3.lib")
#pragma comment (lib,"vtkFiltersGeneric-6.3.lib")

#pragma comment(lib,"vtkFiltersSelection-6.3.lib")
#pragma comment(lib,"vtkFiltersGeneral-6.3.lib")
#pragma comment(lib,"vtkFiltersModeling-6.3.lib")
#pragma comment(lib,"vtkRenderingVolume-6.3.lib")
#pragma comment(lib,"vtkIOLegacy-6.3.lib")
#pragma comment(lib,"vtkIOCore-6.3.lib")
#pragma comment(lib,"vtkCommonMath-6.3.lib")

#pragma comment(lib,"vtkImagingCore-6.3.lib")
#pragma comment(lib,"vtkFiltersGeometry-6.3.lib")
#pragma comment(lib,"vtkIOGeometry-6.3.lib")
#pragma comment(lib,"vtkCommonColor-6.3.lib")

#pragma comment(lib,"vtkIOExport-6.3.lib")
#pragma comment(lib,"vtkFiltersHybrid-6.3.lib")
#pragma comment(lib,"vtkInteractionImage-6.3.lib")
#pragma comment(lib,"vtkImagingSources-6.3.lib")
#pragma comment(lib,"vtkRenderingLOD-6.3.lib")

// TODO:  在此处引用程序需要的其他头文件
