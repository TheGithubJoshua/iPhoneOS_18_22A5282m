@class NSString, NSData, NSArray;

@interface CWFRangingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSData *identifier;
@property (nonatomic) double distance;
@property (nonatomic) double standardDeviation;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long numberOfValidMeasurements;
@property (copy, nonatomic) NSArray *measurements;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRangingResult:(id)a0;

@end
