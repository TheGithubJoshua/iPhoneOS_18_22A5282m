@interface TLKProminenceView : UIView

@property (nonatomic) unsigned long long prominence;

+ (id)viewWithProminence:(unsigned long long)a0;

- (id)init;
- (id)initWithProminence:(unsigned long long)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;

@end
