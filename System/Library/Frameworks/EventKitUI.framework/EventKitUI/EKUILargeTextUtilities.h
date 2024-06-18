@interface EKUILargeTextUtilities : NSObject

+ (double)contentSizeCategoryScaledValueFromContentSizeCategory:(id)a0 correspondingValue:(double)a1 maximumValue:(double)a2;
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)a0 maximumValue:(double)a1 shouldScaleForSmallerSizes:(BOOL)a2;
+ (double)contentSizeCategoryScaledValueForLargestValue:(double)a0;
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)a0 shouldScaleForSmallerSizes:(BOOL)a1;
+ (double)contentSizeCategoryScaledValueForLargestNonAccessibilityValue:(double)a0 maximumValue:(double)a1;

@end
