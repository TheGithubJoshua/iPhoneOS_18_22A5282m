@interface HRTFEnrollmentCaptureAngle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double angle;
@property (readonly) BOOL captured;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAngle:(double)a0 captured:(BOOL)a1;

@end
