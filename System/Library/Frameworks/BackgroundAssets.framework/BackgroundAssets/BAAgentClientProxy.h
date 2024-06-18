@class NSString, NSLock, NSXPCConnection;
@protocol BADownloadManagerSyncProtocol;

@interface BAAgentClientProxy : NSObject {
    NSXPCConnection *_connection;
    NSString *_identifier;
    NSLock *_connectionGuard;
    id<BADownloadManagerSyncProtocol> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
