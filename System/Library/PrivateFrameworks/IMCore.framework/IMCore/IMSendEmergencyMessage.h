@class IMDaemonController;
@protocol IMDaemonProtocol;

@interface IMSendEmergencyMessage : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon;

- (id)initWithDaemon:(id)a0;
- (id)init;
- (void)daemonControllerDidDisconnect;
- (void)locationUpdateSent;
- (void)daemonConnectionLost;
- (void).cxx_destruct;
- (void)setUpConnectionToDaemaon;
- (void)dealloc;
- (void)sendEmergencyQuestionnaire:(id)a0;

@end
