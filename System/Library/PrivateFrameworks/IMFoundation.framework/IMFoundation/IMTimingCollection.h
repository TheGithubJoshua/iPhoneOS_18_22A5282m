@class NSMutableDictionary;

@interface IMTimingCollection : NSObject {
    NSMutableDictionary *_timings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)removeTimingForKey:(id)a0;
- (void)startTimingForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (double)totalTimeForKey:(id)a0;
- (BOOL)hasKey:(id)a0;
- (void)stopTimingForKey:(id)a0;

@end
