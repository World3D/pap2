﻿using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// General Information about an assembly is controlled through the following 
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
[assembly: AssemblyTitle("Fireball.Windows.Forms")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("dotnetfireball.org")]
[assembly: AssemblyProduct("Fireball.Windows.Forms")]
[assembly: AssemblyCopyright("Copyright dotnetfireball.org 2005")]
[assembly: AssemblyTrademark("")]
[assembly: AssemblyCulture("")]

// Setting ComVisible to false makes the types in this assembly not visible 
// to COM componenets.  If you need to access a type in this assembly from 
// COM, set the ComVisible attribute to true on that type.
[assembly: ComVisible(false)]

// Version information for an assembly consists of the following four values:
//
//      Major Version
//      Minor Version 
//      Build Number
//      Revision
//
// You can specify all the values or you can default the Revision and Build Numbers 
// by using the '*' as shown below:
// #if DEBUG
// [assembly: AssemblyVersion("2.0.0.0")]
// [assembly: AssemblyFileVersion("2.0.0.0")]
// #endif
[assembly: Dependency("Fireball.Core", LoadHint.Always)]
#if DEBUG
[assembly: AssemblyVersion("2.0.0.10")]
[assembly: AssemblyFileVersion("2.0.0.10")]
#endif