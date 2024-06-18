@class NSFileAccessNode, NSXPCConnection;

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)a0 usingBlock:(id /* block */)a1;

- (void)forwardUsingProxy:(id)a0;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (id)itemLocation;
- (id)client;
- (id)_clientProxy;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)descriptionWithIndenting:(id)a0;
- (BOOL)allowedForURL:(id)a0;
- (void)setItemLocation:(id)a0;
- (id)initWithClient:(id)a0 reactorID:(id)a1;
- (id)reactorID;

@end
