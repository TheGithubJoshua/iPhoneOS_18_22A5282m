@class NSDictionary, LNSystemProtocol, LNAction;

@interface LNSuggestedAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNSystemProtocol *systemProtocol;
@property (readonly, copy, nonatomic) NSDictionary *dialogParameters;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(id)a0 systemProtocol:(id)a1 dialogParameters:(id)a2;

@end
