@class NSString, NSArray;

@interface PKPassDetailSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSString *insertAfterSection;
@property (retain, nonatomic) NSArray *rows;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithCoder:(id)a0;
- (id)asDictionary;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2;
- (id)initWithRows:(id)a0;

@end
