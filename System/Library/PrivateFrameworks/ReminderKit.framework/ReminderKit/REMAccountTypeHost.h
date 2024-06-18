@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (id)initWithType:(long long)a0;
- (id)internalDescription;
- (BOOL)isCloudKit;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isLocalInternal;
- (unsigned long long)hash;
- (BOOL)isExchange;
- (BOOL)isValid;
- (BOOL)isCalDav;
- (BOOL)isNonPrimaryCloudKit;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isLocal;
- (BOOL)isCloudBased;
- (long long)_accountType;

@end
