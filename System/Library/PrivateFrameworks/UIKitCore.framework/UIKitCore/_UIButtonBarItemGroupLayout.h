@class _UIButtonBarSpacerLayout, UILayoutGuide, NSMapTable, UIBarButtonItemGroup, NSMutableArray, _UIButtonBarLayout;

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
    _UIButtonBarSpacerLayout *_leadingSpacerLayout;
}

@property (readonly, nonatomic) UIBarButtonItemGroup *group;
@property (readonly, nonatomic) UILayoutGuide *groupSizeGuide;
@property (nonatomic) BOOL critical;
@property (nonatomic) BOOL fixed;
@property (nonatomic) BOOL compact;
@property (nonatomic) BOOL spilled;
@property (nonatomic) BOOL useGroupSizing;
@property (nonatomic) BOOL suppressSpacing;
@property (nonatomic) BOOL suppressCustomSpacing;
@property (nonatomic) long long leadingSpacerType;
@property (copy, nonatomic) id /* block */ itemViewGenerator;
@property (readonly, nonatomic) double compactWidth;
@property (readonly, nonatomic) double expandedWidth;

- (void)_configure;
- (BOOL)isGroupLayout;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (void)_addLayoutGuides:(id)a0;
- (BOOL)isSpaceLayout;
- (void)_addLayoutViews:(id)a0;
- (id)initWithLayoutMetrics:(id)a0;
- (id)subLayouts;
- (BOOL)shouldHorizontallyCenterView:(id)a0;
- (void)_iterateConfiguredLayouts:(id /* block */)a0;
- (id)_newLayoutForBarButtonItem:(id)a0 useGroupSizing:(BOOL)a1;
- (id)initWithLayoutMetrics:(id)a0 barButtonItemGroup:(id)a1;
- (id)_itemLayouts;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)a0 doneAppearanceChanged:(BOOL)a1;
- (id)_representativeLayout;
- (void)recalculateLayoutWidthsGivenItemSpaceWidth:(double)a0;
- (void).cxx_destruct;
- (id)layoutsForSpacerItem:(id)a0;
- (id)description;
- (id)layoutForBarButtonItem:(id)a0;

@end
