@class NSString, NSNumber;

@interface WiFiUsageLQMFeature : NSObject

@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic) BOOL isPerSecond;
@property (retain, nonatomic) NSNumber *median;

- (id)initWithField:(id)a0 andPerSecond:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
