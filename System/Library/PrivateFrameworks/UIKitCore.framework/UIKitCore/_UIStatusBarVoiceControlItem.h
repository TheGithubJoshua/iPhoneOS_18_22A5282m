@interface _UIStatusBarVoiceControlItem : _UIStatusBarIndicatorItem

+ (id)pillCombinedDisplayIdentifier;

- (id)_overriddenStyleAttributesForVoiceControlType:(long long)a0;
- (double)imageOpacityForVoiceControlType:(long long)a0;
- (id)indicatorEntryKey;
- (id)overriddenStyleAttributesForData:(id)a0 identifier:(id)a1;
- (id)systemImageNameForUpdate:(id)a0;
- (id)imageForUpdate:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;

@end
