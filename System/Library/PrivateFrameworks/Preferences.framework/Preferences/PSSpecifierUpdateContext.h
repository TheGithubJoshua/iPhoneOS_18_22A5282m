@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying>

@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL updateModelOnly;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)context;
+ (id)contextWithUserInfo:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
