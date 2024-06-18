@class CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSDate *locationUpdateTimestamp;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:(id)a0 locationUpdateTimestamp:(id)a1;

@end
