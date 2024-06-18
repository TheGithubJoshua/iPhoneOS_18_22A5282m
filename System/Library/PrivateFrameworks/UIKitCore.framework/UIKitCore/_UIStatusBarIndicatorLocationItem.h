@class _UIStatusBarIdentifier, _UIStatusBarImageView;

@interface _UIStatusBarIndicatorLocationItem : _UIStatusBarIndicatorItem

@property (class, readonly) _UIStatusBarIdentifier *prominentDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarImageView *prominentImageView;
@property (nonatomic) long long previousType;

+ (id)groupWithPriority:(long long)a0;

- (id)createDisplayItemForIdentifier:(id)a0;
- (void)_create_prominentImageView;
- (id)viewForIdentifier:(id)a0;
- (id)indicatorEntryKey;
- (id)overriddenStyleAttributesForData:(id)a0 identifier:(id)a1;
- (id)systemImageNameForUpdate:(id)a0;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end