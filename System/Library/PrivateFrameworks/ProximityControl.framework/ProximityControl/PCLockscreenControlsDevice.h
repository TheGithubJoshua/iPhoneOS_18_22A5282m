@class NSNumber, NSString;

@interface PCLockscreenControlsDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) NSString *mediaRouteID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaRouteID:(id)a0 distance:(id)a1;

@end
