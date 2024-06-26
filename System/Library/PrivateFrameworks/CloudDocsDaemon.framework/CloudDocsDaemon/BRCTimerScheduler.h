@class NSString, BRCAccountSession, NSObject;
@protocol OS_dispatch_source;

@interface BRCTimerScheduler : NSObject <BRCLifeCycle> {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _suspended;
    NSString *_name;
    NSString *_sqlTable;
    NSString *_field;
    id /* block */ _handler;
}

@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)reschedule;
- (void).cxx_destruct;
- (void)resume;
- (void)close;
- (id)initWithAccountSession:(id)a0 timerName:(id)a1 sqlTable:(id)a2 field:(id)a3 timerHandler:(id /* block */)a4;

@end
