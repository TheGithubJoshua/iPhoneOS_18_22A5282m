@interface SBGuidedAccessListener : NSObject

@property (nonatomic) BOOL isGuidedAccessActive;

+ (id)sharedGuidedAccessListener;

- (void)guidedAccessWasActivated;
- (id)init;
- (void)guidedAccessWasDeactivated;

@end
