@class NSString;

@interface CCUISensorAttributionEntity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *executableDisplayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isSystemService;
@property (readonly, copy, nonatomic) NSString *displayNameForCompactView;

+ (id)genericLocationSystemServiceEntity;
+ (id)attributionEntityFromSensorActivityData:(id)a0;

- (BOOL)isContinuityCaptureExtension;
- (unsigned long long)hash;
- (BOOL)isSiriAndDictationEntity;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isKeyboardCameraEntity;
- (BOOL)isSetupApp;
- (BOOL)isGenericLocationSystemServiceEntity;
- (BOOL)isWalletSpecialEntity;

@end
