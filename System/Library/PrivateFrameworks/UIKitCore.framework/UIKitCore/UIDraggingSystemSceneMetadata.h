@class NSString;

@interface UIDraggingSystemSceneMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *sceneIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
