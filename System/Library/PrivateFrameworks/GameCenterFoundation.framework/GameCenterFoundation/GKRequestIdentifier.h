@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>

@property (nonatomic) unsigned long long savedHash;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSArray *arguments;

+ (id)requestIdentifierForInvocation:(id)a0;

- (id)initWithInvocation:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_argumentsForInvocation:(id)a0;

@end
