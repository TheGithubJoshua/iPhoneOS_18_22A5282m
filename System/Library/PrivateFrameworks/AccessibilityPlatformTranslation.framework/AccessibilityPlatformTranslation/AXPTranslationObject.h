@class NSString, NSData;

@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long objectID;
@property (copy, nonatomic) NSString *remoteDebugDescription;
@property (nonatomic) int pid;
@property (nonatomic) BOOL isApplicationElement;
@property (copy, nonatomic) NSString *bridgeDelegateToken;
@property (copy, nonatomic) NSData *rawElementData;
@property (nonatomic) BOOL didPopuldateAppInfo;
@property (copy, nonatomic) id /* block */ remoteDescriptionBlock;

+ (void)initialize;
+ (id)allowedDecodableClasses;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
