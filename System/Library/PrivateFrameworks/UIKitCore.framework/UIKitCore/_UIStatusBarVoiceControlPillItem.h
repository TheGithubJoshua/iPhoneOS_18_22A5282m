@class _UIStatusBarPillView;

@interface _UIStatusBarVoiceControlPillItem : _UIStatusBarVoiceControlItem

@property (retain, nonatomic) _UIStatusBarPillView *pillView;
@property (nonatomic) struct CGSize { double width; double height; } pillSize;

- (id)createDisplayItemForIdentifier:(id)a0;
- (BOOL)_pulsingForVoiceControlType:(long long)a0;
- (id)viewForIdentifier:(id)a0;
- (id)_backgroundColorForVoiceControlType:(long long)a0 styleAttributes:(id)a1;
- (double)imageOpacityForVoiceControlType:(long long)a0;
- (void).cxx_destruct;
- (void)_create_pillView;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;

@end
