@class NSNumber, WLKDebouncingQueue, NSString;

@interface WLKRestrictionsObserver : NSObject <MCProfileConnectionObserver>

@property (retain, nonatomic) NSNumber *TVRanking;
@property (retain, nonatomic) NSNumber *movieRanking;
@property (retain, nonatomic) WLKDebouncingQueue *debounceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (id)init;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)_evaluateRestrictionsChange;
- (void)dealloc;

@end
