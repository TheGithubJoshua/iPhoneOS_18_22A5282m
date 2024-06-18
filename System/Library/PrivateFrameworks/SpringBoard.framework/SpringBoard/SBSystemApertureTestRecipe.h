@class NSString, NSArray, NSMutableArray;

@interface SBSystemApertureTestRecipe : NSObject <SBTestRecipe> {
    NSArray *_prototypeElementClasses;
    NSMutableArray *_elementAssertions;
    long long _elementClassToInsertIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldRegisterTestRecipe;

- (id)init;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (id)title;

@end
