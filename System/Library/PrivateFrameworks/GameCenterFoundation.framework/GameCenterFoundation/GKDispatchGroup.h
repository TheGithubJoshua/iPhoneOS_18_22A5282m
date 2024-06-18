@class GKThreadsafeDictionary, NSString, NSError, NSObject, GKActivity;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    id result;
    int _sequence;
}

@property (retain) GKActivity *activity;
@property (retain) NSError *error;
@property (retain) id result;
@property (nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled;

+ (id)dispatchGroup;
+ (id)defaultConcurrentQueue;
+ (id)backgroundConcurrentQueue;
+ (id)dispatchGroupWithName:(id)a0;
+ (id)mainQueue;
+ (void)waitUntilDone:(id /* block */)a0;

- (void)leave;
- (void)wait;
- (void)enter;
- (void)perform:(id /* block */)a0;
- (id)init;
- (long long)waitWithTimeout:(double)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (id)allValues;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dealloc;
- (id)_values;
- (id)initWithName:(id)a0;

@end
