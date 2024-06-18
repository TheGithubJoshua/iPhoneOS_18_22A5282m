@class NSString, ARReferenceImage, NSUUID;

@interface ARImageAnchor : ARAnchor <ARTrackable> {
    NSUUID *_referenceImageUUID;
}

@property (nonatomic, getter=isDetectionOnly) BOOL detectionOnly;
@property (nonatomic) BOOL isTracked;
@property (readonly, nonatomic) ARReferenceImage *referenceImage;
@property (readonly, nonatomic) double estimatedScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)copyWithTrackedState:(BOOL)a0;
- (id)initWithReferenceImage:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 detectionOnly:(BOOL)a2 tracked:(BOOL)a3;
- (void)setEstimatedScaleFactor:(double)a0;

@end
