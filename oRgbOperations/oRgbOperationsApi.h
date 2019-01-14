#pragma once

#define DllExport __declspec( dllexport )

namespace oRgbOperations
{
	class DllExport oRgbOperationsApi
	{
	public:
		void ConvertImage();
	};
}