@class UIImage, UIView;
@protocol SBUILegibilitySettings, SBUILegibilityEngine, _SBUILegibilityContainerContentView;

@interface SBUILegibilityContainerView : UIView {
    UIView<_SBUILegibilityContainerContentView> *_drawView;
    BOOL _dirty;
}

@property (nonatomic) double strength;
@property (readonly, nonatomic) UIImage *strengthenedImage;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *processedImage;
@property (weak, nonatomic) id<SBUILegibilityEngine> legibilityEngine;
@property (retain, nonatomic) id<SBUILegibilitySettings> legibilitySettings;
@property (readonly, nonatomic) long long options;

- (BOOL)updateOptions:(long long)a0;
- (BOOL)_updateFilters;
- (void)_applyStrength;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)buildDrawView;
- (void)sizeToFit;
- (void)_setDrawImage:(id)a0;
- (BOOL)_usesSecondaryColor;
- (void).cxx_destruct;
- (void)setImage:(id)a0 strengthenedImage:(id)a1 strength:(double)a2;
- (void)applySettingsForLegibilityStyle:(long long)a0;
- (BOOL)_usesColorFilters;
- (id)_drawView;
- (id)_contentColor;
- (void)layoutSubviews;

@end
