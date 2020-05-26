#pragma once

#ifdef CALUCULATOR_EXPORTS
#define CALUCULATOR_API __declspec(dllexport)
#else
#define CALUCULATOR_API __declspec(dllimport)
#endif // CALUCULATOR_EXPORTS
#pragma once
