@class NSString;

@interface VIObjectCategory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *knowledgeGraphID;
@property (readonly, copy, nonatomic) NSString *labelDebugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKnowledgeGraphID:(id)a0 labelDebugDescription:(id)a1;

@end
