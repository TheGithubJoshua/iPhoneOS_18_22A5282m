@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isMetadataValid) BOOL metadataValid;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) double frameNumber;

- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 faceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; } *)a2;
- (void)validateMask;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
