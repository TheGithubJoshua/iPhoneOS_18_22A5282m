@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) BOOL staticActivity;

+ (id)_translateCriteria:(id)a0;

- (void)checkin;
- (BOOL)finished;
- (BOOL)deferActivity;
- (BOOL)shouldDefer;
- (void)schedule;
- (id)initWithDelegate:(id)a0;
- (void)scheduleWithDelay:(long long)a0;
- (void)cancel;
- (void)_backgroundDeferralCheck;
- (void)_endDeferralCheck;
- (BOOL)_continueActivity;
- (void)_registerActivityWithCriteria:(id)a0;
- (void).cxx_destruct;
- (void)_startDeferralCheck;
- (BOOL)setActivityState:(long long)a0;

@end
