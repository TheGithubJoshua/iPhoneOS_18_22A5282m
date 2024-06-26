@class NSURL, NSString;

@interface REElementOpenAction : REElementAction

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *applicationID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_performWithContext:(id)a0;
- (id)initWithURL:(id)a0 applicationID:(id)a1;

@end
