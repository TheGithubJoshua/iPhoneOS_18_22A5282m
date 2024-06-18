@class NSArray, NSDictionary, NSDate;

@interface KTStatusResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL optInState;
@property (retain) NSArray *recentFailedEventIds;
@property (retain) NSDate *expectedSelfResolutionDate;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
