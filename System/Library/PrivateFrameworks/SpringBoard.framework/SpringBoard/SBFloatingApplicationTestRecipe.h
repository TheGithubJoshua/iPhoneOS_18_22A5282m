@class NSString;

@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe> {
    unsigned long long _mode;
    BOOL _addSide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_perform;
- (id)title;

@end
