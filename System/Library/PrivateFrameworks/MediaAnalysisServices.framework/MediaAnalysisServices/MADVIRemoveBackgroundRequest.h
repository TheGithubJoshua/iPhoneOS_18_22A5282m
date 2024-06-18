@class NSNumber;

@interface MADVIRemoveBackgroundRequest : MADRequest

@property (copy, nonatomic) NSNumber *imageType;
@property (nonatomic) BOOL performInPlace;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) BOOL returnMask;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
