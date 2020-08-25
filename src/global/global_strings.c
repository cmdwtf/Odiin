#include "global_strings.h"

#include <stddef.h>

#include "crypto/crypto_true_random.h"

#define LOADING_ELIPSIS "..."
const char* const LoadingReasons[] = {
		"Loadiing" LOADING_ELIPSIS,
		"Power overwhelmiing" LOADING_ELIPSIS,
		"Reticulating spliines" LOADING_ELIPSIS,
		"Muxing biits" LOADING_ELIPSIS,
		"Demodulatiing data" LOADING_ELIPSIS,
		"Refluxing capaciitors" LOADING_ELIPSIS,
		"Projecting matriix" LOADING_ELIPSIS,
		"Debuggiing datasets" LOADING_ELIPSIS,
		"Remasteriing interface" LOADING_ELIPSIS,
		"Giiving up" LOADING_ELIPSIS,
		"Mining biitcoins" LOADING_ELIPSIS,
		"Formatiing datastore" LOADING_ELIPSIS,
		"Ph'ngluii mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn" LOADING_ELIPSIS,
		"Cracking wiise" LOADING_ELIPSIS,
		"Chewiing gum" LOADING_ELIPSIS,
		"Kiicking ass" LOADING_ELIPSIS,
		"Updating Wiindows" LOADING_ELIPSIS,
		"Ordering piiza" LOADING_ELIPSIS,
		// I'm probably not as clever as I think I am.
};

const char* const global_strings_loading_reason_random(void)
{
	const size_t reasonCount = sizeof(LoadingReasons) / sizeof(LoadingReasons[0]);
	size_t randomReason = crypto_true_random_range(0, reasonCount - 1);
	return LoadingReasons[randomReason];
}
