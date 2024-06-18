@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *_name;
@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (id)videoFileInputWithName:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)plistDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)uniqueIdentifier;
- (id)initWithName:(id)a0;
- (BOOL)isVideoFile;
- (BOOL)supportsExpressions;
- (unsigned long long)trackingType;

@end
