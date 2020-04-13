/* ???? ?? */

			s_emotionDict["joy"] = CRaceMotionData::NAME_JOY;

/* ??? ???? */

#ifdef ENABLE_EXPRESSING_EMOTION
			s_emotionDict["pushup"] = CRaceMotionData::NAME_PUSH_UP;
			s_emotionDict["dance7"] = CRaceMotionData::NAME_DANCE_7;
			s_emotionDict["exercise"] = CRaceMotionData::NAME_EXERCISE;
			s_emotionDict["doze"] = CRaceMotionData::NAME_DOZE;
			s_emotionDict["selfie"] = CRaceMotionData::NAME_SELFIE;

			s_emotionDict["cherging"] = 12;
			s_emotionDict["nosay"] = 13;
			s_emotionDict["weather_1"] = 14;
			s_emotionDict["weather_2"] = 15;
			s_emotionDict["weather_3"] = 16;
			s_emotionDict["hungry"] = 17;
			s_emotionDict["siren"] = 18;
			s_emotionDict["letter"] = 19;
			s_emotionDict["call"] = 20;
			s_emotionDict["celebration"] = 21;
			s_emotionDict["alcohol"] = 22;
			s_emotionDict["busy"] = 23;
			s_emotionDict["whirl"] = 24;
#endif

/* ???? ?? */

			if (pInstance)
			{
				pInstance->ActEmotion(emotionIndex);
			}
/* ???????? */

			if (pInstance)
			{
#ifdef ENABLE_EXPRESSING_EMOTION
				if (emotionIndex > 11 && emotionIndex < 25)
					pInstance->SetEmoticon(emotionIndex);
				else
					pInstance->ActEmotion(emotionIndex);
#else
				pInstance->ActEmotion(emotionIndex);
#endif
			}
