@class NSObject, TUCall;
@protocol OS_dispatch_queue, SATelephonyDelegateProtocol;

@interface SATelephonyManager : NSObject

@property (nonatomic) BOOL callInProgress;
@property (nonatomic) BOOL callFailed;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callQueue;
@property (weak, nonatomic) id<SATelephonyDelegateProtocol> delegate;

- (void)_callStatusChanged:(id)a0;
- (void)placeVoiceCall:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_currentCallEnded;
- (void)_canPlaceNewCall:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (void)handleCallChanged:(id)a0 force:(BOOL)a1;

@end
