@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *changePointAt;
@property (readonly) long long toQuality;
@property (readonly) double confidence;
@property (readonly) long long resolutionSeconds;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
