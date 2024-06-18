@class SCLSchoolModeManager;

@interface SCLWatchServer : NSObject

@property (readonly, nonatomic) SCLSchoolModeManager *schoolModeManager;

+ (id)sharedWatchServer;

- (void).cxx_destruct;
- (void)run;

@end
