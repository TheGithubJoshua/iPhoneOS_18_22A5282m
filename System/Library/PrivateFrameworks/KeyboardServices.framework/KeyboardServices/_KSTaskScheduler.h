@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTasks;

+ (id)sharedInstance;

- (void)registerTask:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterTask:(id)a0;

@end
