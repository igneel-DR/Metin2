/* ???? ?? */

PyModule_AddIntConstant(poModule, "CAMERA_STOP",			CPythonApplication::CAMERA_STOP);

/* ??? ???? */
#ifdef ENABLE_EXPRESSING_EMOTION
	PyModule_AddIntConstant(poModule, "SPECIAL_ACTION_START_INDEX", 100);
#endif

	PyModule_AddIntConstant(poModule, "PLAYER_PER_ACCOUNT",		PLAYER_PER_ACCOUNT);

/* ???? ?? */
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif

/* ??? ???? */
#ifdef ENABLE_EXPRESSING_EMOTION
	PyModule_AddIntConstant(poModule, "ENABLE_EXPRESSING_EMOTION", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_EXPRESSING_EMOTION", 0);
#endif
