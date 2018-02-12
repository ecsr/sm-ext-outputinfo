#if defined _OutputInfo_Included
 #endinput
#endif
#define _OutputInfo_Included

native int GetOutputCount(int entity, const char[] output);
native bool GetOutputTarget(int entity, const char[] output, int index, char[] target, int maxlen);
native bool GetOutputTargetInput(int entity, const char[] output, int index, char[] targetinput, int maxlen);
native bool GetOutputParameter(int entity, const char[] output, int index, char[] parameter, int maxlen);
native float GetOutputDelay(int entity, const char[] output, int index);

/**
 * Do not edit below this line!
 */
public Extension __ext_outputinfo =
{
	name = "OutputInfo",
	file = "outputinfo.ext",
#if defined AUTOLOAD_EXTENSIONS
	autoload = 1,
#else
	autoload = 0,
#endif
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_EXTENSIONS
public __ext_outputinfo_SetNTVOptional()
{
	MarkNativeAsOptional("GetOutputCount");
	MarkNativeAsOptional("GetOutputTarget");
	MarkNativeAsOptional("GetOutputTargetInput");
	MarkNativeAsOptional("GetOutputParameter");
	MarkNativeAsOptional("GetOutputDelay");
}
#endif
