@class NSSet;
@protocol GTXPCConnection;

@interface DYFSStreamerServiceXPCProxy : NSObject <DYFSStreamerService> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)finishedSending;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)initializeTransfer;
- (void)itemData:(id)a0 attributes:(id)a1;
- (void)streamAbort;

@end
