@class NSUserActivity;

@interface CPSceneSharingRequest : CPBaseSceneRequest

@property (retain, nonatomic) NSUserActivity *userActivity;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
