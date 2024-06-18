@class NSString, NSDate;

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *flightQuery;
@property (copy, nonatomic) NSString *appBundleId;

- (id)initWithCoder:(id)a0;
- (Class)responseClass;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)nwActivityLabel;

@end
