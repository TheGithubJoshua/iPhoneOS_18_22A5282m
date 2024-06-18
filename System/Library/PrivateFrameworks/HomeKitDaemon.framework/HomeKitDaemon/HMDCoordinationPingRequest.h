@interface HMDCoordinationPingRequest : COMeshRequest

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
