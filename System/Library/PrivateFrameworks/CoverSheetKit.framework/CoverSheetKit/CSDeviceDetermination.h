@interface CSDeviceDetermination : NSObject

+ (unsigned long long)effectiveCategory;
+ (double)_zoomScaleForBaseDevice:(unsigned long long)a0;
+ (BOOL)_screenScaleMatchesZoomScale:(double)a0;
+ (BOOL)isCategoryPad:(unsigned long long)a0;
+ (unsigned long long)_zoomAwareCategoryForDevice:(unsigned long long)a0 zoomVariant:(unsigned long long)a1;
+ (BOOL)isCategoryPhone:(unsigned long long)a0;
+ (unsigned long long)baseCategory;
+ (unsigned long long)categoryFromScreenSize;

@end
