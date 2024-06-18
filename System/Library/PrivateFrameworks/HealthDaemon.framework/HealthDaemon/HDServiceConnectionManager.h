@class NSString, HDProfile, NSMutableDictionary, NSObject, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
    HDProfile *_profile;
    HDHealthServiceManager *_serviceManager;
    BOOL _connecting;
    BOOL _BTLEEnabled;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0;
- (id)init;
- (void)reconnectToServices;
- (void)profileDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (void)connectToService:(id)a0;
- (id)diagnosticDescription;
- (void)disconnectFromServices;
- (void)dealloc;
- (void)disconnectFromService:(id)a0;

@end
