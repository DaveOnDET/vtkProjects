// TestVTK.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "../vtk6.3.hpp"
#include "vtkNew.h"
#include "vtkPolyData.h"

int _tmain(int argc, _TCHAR* argv[])
{
	vtkNew<vtkPolyData> ds;
	return 0;
}

