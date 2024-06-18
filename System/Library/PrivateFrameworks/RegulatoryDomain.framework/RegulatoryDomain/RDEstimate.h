@class NSString, NSDate;

@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _priority;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)currentEstimateSet;
+ (id)lastKnownEstimateSet;
+ (id)currentEstimates;
+ (id)lastKnownEstimates;

- (id)initWithCoder:(id)a0;
- (unsigned int)getPriority;
- (BOOL)priorityIsAtLeast:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCountryCode:(id)a0 priority:(unsigned int)a1 timestamp:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;

@end
