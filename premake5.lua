-- premake5.lua
workspace "MarbleApp"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "MarbleApp"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "WalnutExternal.lua"
include "MarbleApp"