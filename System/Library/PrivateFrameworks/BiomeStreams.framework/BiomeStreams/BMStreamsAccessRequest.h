@class NSXPCListener, BMFileServer, BMAccessControlPolicy, NSString;

@interface BMStreamsAccessRequest : NSObject <BMStreamsAccessRequestProtocol> {
    unsigned long long _domain;
    BMFileServer *_fileServer;
    NSString *_applicationIdentifier;
}

@property (retain, nonatomic) BMAccessControlPolicy *policy;
@property (weak, nonatomic) NSXPCListener *listener;

- (void)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 reply:(id /* block */)a3;
- (id)connection;
- (id)initWithDomain:(unsigned long long)a0;
- (void)temporaryFileHandleWithProtection:(int)a0 reply:(id /* block */)a1;
- (void)createDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)removeFileAtPath:(id)a0 reply:(id /* block */)a1;
- (void)requestAccess:(unsigned long long)a0 streamIdentifier:(id)a1 streamType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)_configureDirectoryForStreamType:(unsigned long long)a0;
- (void)sharedMemoryForFileAtPath:(id)a0 flags:(int)a1 reply:(id /* block */)a2;
- (id)applicationIdentifier;
- (void)requestAccessToFlexibleStorageWithReply:(id /* block */)a0;
- (void)requestBiomeEndpoint:(BOOL)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_processRequestForAccess:(id)a0 reply:(id /* block */)a1;
- (BOOL)_hasDirectoryAtPath:(id)a0;
- (void)removeDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 reply:(id /* block */)a2;
- (BOOL)_createDirectoryAtPath:(id)a0;

@end
