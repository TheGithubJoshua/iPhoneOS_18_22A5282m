@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void)_notify;
- (void).cxx_destruct;
- (void)dealloc;

@end
