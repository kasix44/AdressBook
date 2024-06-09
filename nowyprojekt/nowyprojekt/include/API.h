#pragma once

#ifdef _BUILD

#define PROJECT_API __declspec(dllexport)

#else

#define PROJECT_API __declspec(dllimport)

#endif // _BUILD
