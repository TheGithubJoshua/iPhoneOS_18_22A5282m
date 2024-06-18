@class NSDate, TASuspiciousDevice;

@interface TAStagedSuspiciousDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TASuspiciousDevice *detection;
@property (copy, nonatomic) NSDate *keepInStagingUntil;

- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithDetection:(id)a0 keepInStagingUntil:(id)a1;

@end
