#if defined _OutputInfo_Included
 #endinput
#endif
#define _OutputInfo_Included

/**
 * Gets the number of actions for given output
 * Note that this can change if an action has been deleted due to being used more than TimesToFire
 *
 * @param entity		Entity to use
 * @param output		The name of the output (e.g. m_OnTrigger)
 *
 * @return				Number of actions for that entity output
 */
native int GetOutputActionCount(int entity, const char[] output);

/**
 * Gets the target of an output action
 *
 * @param entity		Entity to use
 * @param output		The name of the output (e.g. m_OnTrigger)
 * @param index			The index of the action to use
 * @param target		Output string buffer
 * @param maxlen		Max length of output string buffer
 
 * @return				True on success, false otherwise
 */
native bool GetOutputActionTarget(int entity, const char[] output, int index, char[] target, int maxlen);

/**
 * Gets the target input of an output action
 *
 * @param entity		Entity to use
 * @param output		The name of the output (e.g. m_OnTrigger)
 * @param index			The index of the action to use
 * @param targetinput	Output string buffer
 * @param maxlen		Max length of output string buffer
 
 * @return				True on success, false otherwise
 */
native bool GetOutputActionTargetInput(int entity, const char[] output, int index, char[] targetinput, int maxlen);

/**
 * Gets the parameter of an output action
 *
 * @param entity		Entity to use
 * @param output		The name of the output (e.g. m_OnTrigger)
 * @param index			The index of the action to use
 * @param parameter		Output string buffer
 * @param maxlen		Max length of output string buffer
 
 * @return				True on success, false otherwise
 */
native bool GetOutputActionParameter(int entity, const char[] output, int index, char[] parameter, int maxlen);

/**
 * Gets the delay of an output action
 *
 * @param entity		Entity to use
 * @param output		The name of the output (e.g. m_OnTrigger)
 * @param index			The index of the action to use
 
 * @return				Delay in seconds
 */
native float GetOutputActionDelay(int entity, const char[] output, int index);

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
