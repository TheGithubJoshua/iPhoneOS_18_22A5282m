@class NSString, NSMutableSet, NSXPCConnection;

@interface NFAccessoryHardwareManager : NSObject <NSXPCConnectionDelegate> {
    NSXPCConnection *_connection;
    NSMutableSet *_sessions;
    unsigned long long _refCount;
    unsigned int _hwSupport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHardwareManager;

- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)sessionDidEnd:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)disconnect;
- (id)startReaderSession:(id /* block */)a0;
- (id)getPowerCounters:(id *)a0;
- (BOOL)connect;
- (void).cxx_destruct;
- (id)pushSignedRF:(id)a0;
- (void)dealloc;
- (BOOL)triggerDelayedWake:(unsigned char)a0;
- (void)_connectIfNeeded;
- (void)didInterruptXPCConnection:(id)a0;
- (void)didInvalidateXPCConnection:(id)a0;
- (id)getInfo;
- (id)enableMultiTag:(BOOL)a0;
- (id)clearMultiTagState;
- (id)enableLPCD:(BOOL)a0;
- (id)getDieId:(id *)a0;
- (unsigned int)getHwSupport:(BOOL)a0 error:(id *)a1;
- (id)getLastDetectedTags:(id *)a0;
- (id)getMultiTagState:(id *)a0;
- (id)getRfSettings:(id *)a0;
- (BOOL)shutdownAndLeaveHWEnabled:(BOOL)a0;
- (id)updateHWSupport:(BOOL)a0;

@end
