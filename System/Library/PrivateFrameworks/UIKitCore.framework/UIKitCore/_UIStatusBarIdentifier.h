@class NSString;

@interface _UIStatusBarIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (copy, nonatomic) id object;
@property (copy, nonatomic) NSString *string;

+ (id)displayIdentifierFromStringRepresentation:(id)a0;
+ (id)uninternedIdentifierForObject:(id)a0 string:(id)a1;
+ (id)identifierForObject:(id)a0 string:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
