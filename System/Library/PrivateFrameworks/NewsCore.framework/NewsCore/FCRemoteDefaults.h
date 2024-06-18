@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)init;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)initWithBackgroundTaskable:(id)a0;
- (id)stringForKey:(id)a0;
- (id)URLRequest;
- (BOOL)isAvailable;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)checkForUpdate;
- (id)dictionaryForKey:(id)a0;
- (void)updateRemoteDefaults;
- (id)URLForKey:(id)a0;

@end
