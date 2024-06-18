@class NSSet;

@interface SBSwitcherKeyboardSuppressionMode : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *appLayouts;
@property (nonatomic) BOOL applyAssertionEvenIfAppIsHostingTheKeyboard;

+ (id)suppressionModeForAllScenes;
+ (id)suppressionModeNone;
+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)a0;

- (BOOL)suppressesNoScenes;
- (unsigned long long)hash;
- (BOOL)suppressesSwitcherScenesOnly;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAppLayouts:(id)a0 suppressionType:(long long)a1;
- (BOOL)suppressesAllScenes;

@end
