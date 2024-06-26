@class NSString;

@interface SBInCallTestRecipe : NSObject <SBTestRecipe> {
    BOOL _isPresentationActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)title;

@end
