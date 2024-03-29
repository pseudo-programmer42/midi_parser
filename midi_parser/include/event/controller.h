#pragma once
#include "common.h"
#include <string>

namespace MidiParser {
/*##########################

	Controller

##########################*/
class Controller final
{
public:
	/*---------------------
		enumeration
	---------------------*/
	enum Type
	{
		BANK_SELECT_DETAIL = 0,
		MODULATION_WHEEL = 1,
		BREATH_CONTROLLER = 2,
		FOOT_CONTROLLER = 4,
		PORTAMENTO_TIME = 5,
		DATA_ENTRY___USED_WITH_RPNS_NRPNS = 6,
		CHANNEL_VOLUME = 7,
		BALANCE = 8,
		PAN = 10,
		EXPRESSION_CONTROLLER = 11,
		EFFECT_CONTROL_1 = 12,
		EFFECT_CONTROL_2 = 13,
		GEN_PURPOSE_CONTROLLER_1 = 16,
		GEN_PURPOSE_CONTROLLER_2 = 17,
		GEN_PURPOSE_CONTROLLER_3 = 18,
		GEN_PURPOSE_CONTROLLER_4 = 19,
		BANK_SELECT = 32,
		MODULATION_WHEEL_2 = 33,
		BREATH_CONTROLLER_2 = 34,
		FOOT_CONTROLLER_2 = 36,
		PORTAMENTO_TIME_2 = 37,
		DATA_ENTRY = 38,
		CHANNEL_VOLUME_2 = 39,
		BALANCE_2 = 40,
		PAN_2 = 42,
		EXPRESSION_CONTROLLER_2 = 43,
		EFFECT_CONTROL_1_2 = 44,
		EFFECT_CONTROL_2_2 = 45,
		GENERAL_PURPOSE_CONTROLLER_1 = 48,
		GENERAL_PURPOSE_CONTROLLER_2 = 49,
		GENERAL_PURPOSE_CONTROLLER_3 = 50,
		GENERAL_PURPOSE_CONTROLLER_4 = 51,
		SUSTAIN_ON_OFF = 64,
		PORTAMENTO_ON_OFF = 65,
		SOSTENUTO_ON_OFF = 66,
		SOFT_PEDAL_ON_OFF = 67,
		LEGATO_ON_OFF = 68,
		HOLD_2_ON_OFF = 69,
		SOUND_CONTROLLER_1 = 70,
		SOUND_CONTROLLER_2 = 71,
		SOUND_CONTROLLER_3 = 72,
		SOUND_CONTROLLER_4 = 73,
		SOUND_CONTROLLER_5 = 74,
		SOUND_CONTROLLER_6 = 75,
		SOUND_CONTROLLER_7 = 76,
		SOUND_CONTROLLER_8 = 77,
		SOUND_CONTROLLER_9 = 78,
		SOUND_CONTROLLER_10 = 79,
		GENERAL_PURPOSE_CONTROLLER_5 = 80,
		GENERAL_PURPOSE_CONTROLLER_6 = 81,
		GENERAL_PURPOSE_CONTROLLER_7 = 82,
		GENERAL_PURPOSE_CONTROLLER_8 = 83,
		PORTAMENTO_CONTROL_PTC = 84,
		HIGH_RESOLUTION_VELOCITY_PREFIX = 88,
		EFFECTS_1_DEPTH_REVERB_SEND_LEVEL = 91,
		EFFECTS_2_DEPTH_TREMELO_DEPTH = 92,
		EFFECTS_3_DEPTH_CHORUS_SEND_LEVEL = 93,
		EFFECTS_4_DEPTH_CELESTE_DEPTH = 94,
		EFFECTS_5_DEPTH_PHASER_DEPTH = 95,
		DATA_INCREMENT = 96,
		DATA_DECREMENT = 97,
		NON_REGISTERED_PARAMETER_NUMBER_LSB = 98,
		NON_REGISTERED_PARAMETER_NUMBER_MSB = 99,
		REGISTERED_PARAMETER_NUMBER_LSB = 100,
		REGISTERED_PARAMETER_NUMBER_MSB = 101,
		ALL_SOUND_OFF = 120,
		RESET_ALL_CONTROLLERS = 121,
		LOCAL_CONTROL_ON_OFF = 122,
		ALL_NOTES_OFF = 123,
		OMNI_MODE_OFF_ALSO_CAUSES_ANO = 124,
		OMNI_MODE_ON_ALSO_CAUSES_ANO = 125,
		MONO_MODE_ON_POLY_OFF = 126,
		POLY_MODE_ON_MONO_OFF = 127,
	};

	/*---------------------
		constructors
	---------------------*/
	Controller() = default;
	Controller(Type type);
	Controller(int type);

	/*---------------------
		methods
	---------------------*/
	static std::string search_type_name(Type type);
	std::string get_type_name() const;
	Type get_type() const;
	void set_type(Type type);


private:
	/*---------------------
		members
	---------------------*/
	Type type = Type::BANK_SELECT_DETAIL;
};
} // MidiParser