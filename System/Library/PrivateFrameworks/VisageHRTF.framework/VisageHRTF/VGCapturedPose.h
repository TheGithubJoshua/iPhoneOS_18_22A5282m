@class NSDictionary, VGCaptureData;

@interface VGCapturedPose : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VGCaptureData *captureData;
@property (retain, nonatomic) NSDictionary *trackingData;
@property (nonatomic) BOOL frontPose;
@property (nonatomic) float selectedAngle;
@property (readonly, nonatomic) BOOL valid;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
