@class NSArray, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsContentAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_ppnames;
    NSArray *_ppscores;
    NSDate *_lastUpdated;
}

- (id)init;
- (void)updateAnalyzers;
- (id)analyzeContent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;

@end
