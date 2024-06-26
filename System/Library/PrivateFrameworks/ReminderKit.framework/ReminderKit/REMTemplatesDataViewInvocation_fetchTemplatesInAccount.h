@class REMObjectID;

@interface REMTemplatesDataViewInvocation_fetchTemplatesInAccount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentAccountObjectID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
