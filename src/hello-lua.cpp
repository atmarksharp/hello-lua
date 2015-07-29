extern "C" {
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

int main(int argc, char** argv)
{
    lua_State* L = luaL_newstate();

    luaL_dostring(L, "a = \"hello from Lua!!\"");
    lua_getglobal(L, "a");
    const char* s = lua_tostring(L, -1);
    printf("%s\n", s);

    lua_close(L);

    return 0;
}
