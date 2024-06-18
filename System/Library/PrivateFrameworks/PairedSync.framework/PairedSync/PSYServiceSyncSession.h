@class NSObject, NSUUID, PSYSyncCoordinator, NRDevice;
@protocol PSYServiceSyncSessionDelegate, OS_dispatch_queue;

@interface PSYServiceSyncSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isComplete;
    BOOL _supportsMigrationSync;
}

@property (retain, nonatomic) NRDevice *pairedDevice;
@property (nonatomic) unsigned long long syncSessionType;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (weak, nonatomic) PSYSyncCoordinator *syncCoordinator;
@property (weak, nonatomic) id<PSYServiceSyncSessionDelegate> delegate;
@property (nonatomic) unsigned long long switchID;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (void)reportProgress:(double)a0;
- (void)syncDidCompleteSending;
- (void).cxx_destruct;
- (void)syncDidComplete;
- (void)syncDidFailWithError:(id)a0;
- (id)initWithQueue:(id)a0 supportsMigrationSync:(BOOL)a1;

@end