@class NSValue, NSMutableDictionary;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;

- (void)setBackgroundVerticalAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (id)anyBackgroundImage;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)a0;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 isMini:(BOOL)a2;
- (id)backgroundImageForState:(unsigned long long)a0 isMini:(BOOL)a1;

@end
