/*
 * EdgeUtils.h
 *
 * Utilities for counting, manipulating edges between words in a sentence.
 *
 * Copyright (c) 2008 Linas Vepstas <linasvepstas@gmail.com>
 */

#ifndef _OPENCOG_WSD_EDGE_UTILS_H
#define _OPENCOG_WSD_EDGE_UTILS_H

#include <set>

#include <opencog/atomspace/Atom.h>

namespace opencog {

class EdgeUtils
{
	protected:
		std::set<Handle> words;

};

}

#endif /* _OPENCOG_WSD_EDGE_UTILS_H */
