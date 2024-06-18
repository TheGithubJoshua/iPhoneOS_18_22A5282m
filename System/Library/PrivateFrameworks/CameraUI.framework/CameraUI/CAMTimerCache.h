@class NSMutableDictionary;
@protocol CAMTimerCacheDelegate;

@interface CAMTimerCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_timersByType;
@property (weak, nonatomic) id<CAMTimerCacheDelegate> delegate;

- (id)init;
- (BOOL)isRunningTimerForKey:(id)a0;
- (void)startTimerForKey:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)cancelTimerForKey:(id)a0;
- (void)cancelAllTimers;
- (void)_handleTimer:(id)a0 forKey:(id)a1;

@end
