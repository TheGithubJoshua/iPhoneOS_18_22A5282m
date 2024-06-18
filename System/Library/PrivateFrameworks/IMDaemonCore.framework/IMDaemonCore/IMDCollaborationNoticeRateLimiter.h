@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (id)loadNoticeEventHistory;
+ (long long)participantChangeThreshold;
+ (id)peristencePath;
+ (long long)commentThreshold;
+ (long long)defaultThreshold;

- (id)init;
- (void)saveNoticeEventHistory;
- (id)dateLastUpdatedForURL:(id)a0;
- (void)didSendNotice:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldSendNotice:(id)a0;
- (long long)thresholdForNoticeType:(long long)a0;

@end
