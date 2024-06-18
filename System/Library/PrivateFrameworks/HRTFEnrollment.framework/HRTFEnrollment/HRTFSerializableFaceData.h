@interface HRTFSerializableFaceData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) long long faceID;
@property (readonly, nonatomic) double yawAngle;
@property (readonly, nonatomic) double rollAngle;
@property (readonly, nonatomic) BOOL yawAngleAvailable;
@property (readonly, nonatomic) BOOL rollAngleAvailable;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFaceObject:(id)a0;

@end
