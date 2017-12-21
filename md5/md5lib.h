/**
*  $Id: md5.h,v 1.2 2006/03/03 15:04:49 tomas Exp $
*  Cryptographic module for Lua.
*  @author  Roberto Ierusalimschy
*/


#ifndef md5lib_h
#define md5lib_h

#include <lua.h>

#define HASHSIZE       16

int luaopen_md5_core(lua_State *L);


#endif
