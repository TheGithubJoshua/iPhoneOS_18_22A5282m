@class NSUUID, NSDictionary;

@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long itemID;
@property (copy, nonatomic) NSDictionary *configuration;

+ (id)requestWithItemID:(long long)a0 configuration:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqualToLogItemRequest:(id)a0;

@end
