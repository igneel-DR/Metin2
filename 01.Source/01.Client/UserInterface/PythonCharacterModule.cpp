/* ???? ?? */
	PyModule_AddIntConstant (poModule, "MOTION_JOY",						CRaceMotionData::NAME_JOY);

/* ??? ???? */
#ifdef ENABLE_EXPRESSING_EMOTION
	PyModule_AddIntConstant (poModule, "EMOTION_PUSH_UP",					CRaceMotionData::NAME_PUSH_UP);
	PyModule_AddIntConstant (poModule, "EMOTION_DANCE_7",					CRaceMotionData::NAME_DANCE_7);
	PyModule_AddIntConstant (poModule, "EMOTION_EXERCISE",					CRaceMotionData::NAME_EXERCISE);
	PyModule_AddIntConstant (poModule, "EMOTION_DOZE",						CRaceMotionData::NAME_DOZE);
	PyModule_AddIntConstant (poModule, "EMOTION_SELFIE",					CRaceMotionData::NAME_SELFIE);
#endif
