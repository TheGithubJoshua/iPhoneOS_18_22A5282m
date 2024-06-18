@class UIColor, NSString, NSAttributedString, NSNumber;

@interface HKSelectedRangeData : NSObject

@property (nonatomic) long long statisticsType;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *titleOverride;
@property (copy, nonatomic) NSNumber *valueAsNumber;
@property (copy, nonatomic) UIColor *prefixColor;
@property (nonatomic) BOOL prefersImageAffixes;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithStatisticsType:(long long)a0;
- (BOOL)isEqualToSelectedRangeData:(id)a0;

@end
