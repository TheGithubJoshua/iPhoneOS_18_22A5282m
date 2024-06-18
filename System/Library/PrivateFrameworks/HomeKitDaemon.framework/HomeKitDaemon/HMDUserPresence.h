@class HMDUser, NSDate, HMDUserPresenceRegion;

@interface HMDUserPresence : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDUser *user;
@property (retain, nonatomic) HMDUserPresenceRegion *presenceRegionStatus;
@property (readonly, nonatomic) NSDate *updateTimestamp;
@property (readonly, nonatomic, getter=isAtHome) BOOL atHome;
@property (readonly, nonatomic, getter=isNotAtHome) BOOL notAtHome;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithUser:(id)a0 presenceRegionStatus:(id)a1;
- (id)initWithUser:(id)a0 presenceRegionStatus:(id)a1 timeStamp:(id)a2;

@end
