@interface SiriAnalyticsLogicalClockSummary : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ clockIdentifier;
    void /* unknown type, empty encoding */ derivativeClockIdentifiers;
    void /* unknown type, empty encoding */ active;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
