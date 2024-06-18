@class DBSLargeTextSliderListController;

@interface DBSLargeTextController : PSListController {
    DBSLargeTextSliderListController *_sliderListController;
    DBSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}

@property (nonatomic) BOOL showsResetSliderButton;
@property (nonatomic) BOOL savesCategoryNameOnlyOnSliderEvent;
@property (nonatomic) BOOL showsExtendedRangeSwitch;

- (id)specifiers;
- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)sizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (void)setUsesExtendedRange:(id)a0 forSpecifier:(id)a1;
- (id)usesExtendedRangeForSpecifier:(id)a0;
- (void)updateSlider;
- (id)readPreferredContentSizeCategoryName;
- (BOOL)readUsesExtendedRange;
- (void)resetContentSizeCategoryName;
- (void)savePreferredContentSizeCategoryName:(id)a0;
- (void)saveUsesExtendedRange:(BOOL)a0;
- (void)updateSlidersForNewUsesExtendedRangeValue:(BOOL)a0;

@end
