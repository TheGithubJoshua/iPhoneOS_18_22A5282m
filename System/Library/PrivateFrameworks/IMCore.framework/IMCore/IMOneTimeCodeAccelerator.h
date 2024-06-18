@class IMDaemonController;
@protocol IMDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection;

- (void)daemonControllerDidDisconnect;
- (id)initWithBlockForUpdates:(id /* block */)a0;
- (id)initWithDaemon:(id)a0 andBlock:(id /* block */)a1;
- (void)_incomingCodeUpdateFromDaemon:(id)a0;
- (void)daemonControllerDidConnect;
- (void)daemonConnectionLost;
- (void)consumeCodeWithGuid:(id)a0;
- (void).cxx_destruct;
- (void)setUpConnectionToDaemaon;
- (void)daemonControllerWillConnect;
- (void)dealloc;

@end
