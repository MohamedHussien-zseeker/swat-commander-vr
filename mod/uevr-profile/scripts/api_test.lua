print("========== UEVR API TEST ==========")

print("uevr:", uevr ~= nil)

if uevr then
    print("uevr.api:", uevr.api ~= nil)
    print("uevr.params:", uevr.params ~= nil)
    print("uevr.sdk:", uevr.sdk ~= nil)
    print("uevr.types:", uevr.types ~= nil)

    if uevr.api then
        print("API functions:")
        print("get_engine:", uevr.api.get_engine ~= nil)
        print("get_local_pawn:", uevr.api.get_local_pawn ~= nil)
    end
end

print("========== TEST COMPLETE ==========")
