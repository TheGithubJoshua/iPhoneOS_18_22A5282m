@class NSString, NSArray;

@interface COKeyPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *absoluteString;
@property (copy, nonatomic) NSArray *components;

+ (id)allowedCharacterSet;
+ (id)createWithString:(id)a0;
+ (id)predicateWithComponents:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComponents:(id)a0;

@end
