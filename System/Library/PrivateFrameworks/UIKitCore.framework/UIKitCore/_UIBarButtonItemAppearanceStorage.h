@class UIColor, NSMutableDictionary, _UIBarBackButtonItemAppearanceStorage, NSValue;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;
@property (retain, nonatomic) NSValue *backButtonTitlePositionOffset;
@property (retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;

- (void)setBackButtonBackgroundVerticalAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)setBackgroundVerticalAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 isMini:(BOOL)a2;
- (id)backgroundImageForState:(unsigned long long)a0 style:(long long)a1 isMini:(BOOL)a2;
- (id)backButtonBackgroundImageForState:(unsigned long long)a0 isMini:(BOOL)a1;
- (id)anyBackgroundImage;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)a0;
- (void).cxx_destruct;
- (double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)a0;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 style:(long long)a2 isMini:(BOOL)a3;
- (id)anyBackButtonBackgroundImage;

@end
