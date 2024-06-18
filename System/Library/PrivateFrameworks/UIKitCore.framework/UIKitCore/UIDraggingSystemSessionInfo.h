@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL supportsSystemDrag;
@property (copy, nonatomic) NSString *persistentSceneIdentifier;
@property (copy, nonatomic) NSString *sceneIdentifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
