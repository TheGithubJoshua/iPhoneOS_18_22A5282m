@class NSDate, NSArray, EKEventStore;
@protocol EKAccountRefresherDelegate;

@interface EKAccountRefresher : NSObject {
    EKEventStore *_eventStore;
    BOOL _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
}

@property (weak, nonatomic) id<EKAccountRefresherDelegate> delegate;
@property (readonly, nonatomic) BOOL refreshing;
@property (readonly, nonatomic) BOOL allAccountsOffline;

- (void)refresh;
- (id)initWithEventStore:(id)a0;
- (void)_syncDidEnd;
- (void)_eventStoreChanged:(id)a0;
- (void).cxx_destruct;
- (void)_syncDidStart;
- (void)_beginMaximumTimeElapsedTimeout;
- (BOOL)_allCalendarsRefreshed;
- (BOOL)_allSourcesRefreshed;
- (BOOL)_areAnyCalendarsCurrentlySyncing;
- (BOOL)_areAnySourcesCurrentlySyncing;
- (void)_beginSyncStartTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_syncCompleted;
- (void)_syncStartTimeoutExpired;
- (BOOL)calendarFinishedRefreshing:(id)a0;
- (BOOL)sourceFinishedRefreshing:(id)a0;

@end
