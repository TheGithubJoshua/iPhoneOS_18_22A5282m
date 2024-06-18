@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton

@property (nonatomic) long long type;
@property (nonatomic) BOOL permitted;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)initWithType:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (id)_statisticsIdentifierForType;
- (void).cxx_destruct;
- (id)_buttonImageNameForSelected:(BOOL)a0;
- (id)_imageWithName:(id)a0;
- (void)_updateStyle;
- (id)_accessoryTitleForType;

@end
