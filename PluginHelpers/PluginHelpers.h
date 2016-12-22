#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////

using namespace System;
using namespace System::Runtime::InteropServices;

////////////////////////////////////////////////////////////////////////////////////////////////

struct UITHEME;

////////////////////////////////////////////////////////////////////////////////////////////////

namespace Abstractspoon
{
	namespace Tdl
	{
		namespace PluginHelpers
		{
			// converts System::String to LPCWSTR, and frees memory on exit
			// DO NOT USE TO RETURN STRINGS
			public ref class MarshalledString
			{
			public:
				MarshalledString(String^ str);
				~MarshalledString();

				operator LPCWSTR();

			private:
				LPCWSTR m_wszGlobal;
			};


		}
	}
}

#define MS(str) Abstractspoon::Tdl::PluginHelpers::MarshalledString(str)

////////////////////////////////////////////////////////////////////////////////////////////////

