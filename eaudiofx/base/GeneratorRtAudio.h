/**
 * @author Edouard DUPIN
 * 
 * @copyright 2014, Edouard DUPIN, all right reserved
 * 
 * @license BSD v3 (see license file)
 */

#ifndef __EAUDIOFX_GENERATOR_RTAUDIO_H__
#define __EAUDIOFX_GENERATOR_RTAUDIO_H__

#include <eaudiofx/core/BlockGenerator.h>

namespace eaudiofx {
	class GeneratorRtAudio : public eaudiofx::BlockGenerator {
		public:
			GeneratorRtAudio(void) {};
			~GeneratorRtAudio(void) {};
	};
};

#endif


