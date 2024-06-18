@class NSString;

@interface AXSDKShotDetector : AXSDDetector <NSSecureCoding> {
    NSString *_customName;
    NSString *_kshotCategory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;

- (id)initWithCoder:(id)a0;
- (unsigned long long)compatibilityVersion;
- (unsigned long long)contentVersion;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addRecording:(id)a0;
- (id)description;
- (id)recordings;
- (id)initWithName:(id)a0;
- (BOOL)isCustom;
- (BOOL)isEqualToKShotDetector:(id)a0;
- (BOOL)isModelReady;
- (BOOL)isTrainingComplete;
- (id)modelURLString;
- (void)setRecordings:(id)a0;

@end
