@class NSString, HKDisplayTypeContextItemTitleAccessory, HKUIMetricColors, NSAttributedString;

@interface HKDisplayTypeContextItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) HKDisplayTypeContextItemTitleAccessory *titleAccessory;
@property (copy, nonatomic) HKDisplayTypeContextItemTitleAccessory *selectedTitleAccessory;
@property (readonly, nonatomic) BOOL hasTitleAccessory;
@property (nonatomic) BOOL infoHidden;
@property (nonatomic) BOOL useTightSpacingBetweenValueAndUnit;
@property (nonatomic) BOOL isUnitIncludedInValue;
@property (nonatomic) BOOL userInteractive;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueContext;
@property (copy, nonatomic) NSAttributedString *attributedValue;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *analyticsIdentifier;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (retain, nonatomic) HKUIMetricColors *selectedMetricColors;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (BOOL)isEqualToContextItem:(id)a0;

@end
