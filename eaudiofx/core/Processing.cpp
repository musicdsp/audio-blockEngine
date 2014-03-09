/**
 * @author Edouard DUPIN
 * 
 * @copyright 2014, Edouard DUPIN, all right reserved
 * 
 * @license BSD v3 (see license file)
 */

#include <eaudiofx/debug.h>
#include <eaudiofx/core/Processing.h>


int32_t eaudiofx::Processing::process(void) {
	EAUDIOFX_INFO("Start process : '" << getName() << "'");
	return eaudiofx::ERR_NONE;
}

int32_t eaudiofx::Processing::start(void) {
	EAUDIOFX_INFO("Start Processing : '" << getName() << "'");
	return init();
}

int32_t eaudiofx::Processing::stop(void) {
	EAUDIOFX_INFO("Stop Processing : '" << getName() << "'");
	return unInit();
}

int32_t eaudiofx::Processing::waitEndOfProcess(void) {
	EAUDIOFX_INFO("wait end of Processing : '" << getName() << "'");
	return eaudiofx::ERR_NONE;
}