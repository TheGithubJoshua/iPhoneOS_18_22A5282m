@class NSXPCConnection;

@interface _PMLowPowerMode : NSObject <_PMLowPowerModeProtocol> {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1;
- (long long)getPowerMode;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1 withParams:(id)a2;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withParams:(id)a2 withCompletion:(id /* block */)a3;

@end
