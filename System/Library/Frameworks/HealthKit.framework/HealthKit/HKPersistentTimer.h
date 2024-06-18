@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)a0;
+ (id)timerWithKey:(id)a0;

- (id)timerValue;
- (void)clear;
- (void)start;
- (void).cxx_destruct;
- (unsigned long long)elapsedSeconds;
- (unsigned long long)elapsedNanoseconds;

@end
