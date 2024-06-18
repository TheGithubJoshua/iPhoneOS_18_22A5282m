@class BSProcessHandle;

@interface RTIInputSystemServiceUISession : RTIInputSystemServiceSession {
    BSProcessHandle *_remoteProcess;
}

+ (id)sessionWithConnection:(id)a0 remoteProcess:(id)a1;

- (id)valueForEntitlement:(id)a0;
- (int)pid;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithConnection:(id)a0 remoteProcess:(id)a1;

@end
