@class NSString, NSArray;

@interface PKPassAuxiliaryPassInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInformation:(id)a0 bundle:(id)a1 privateBundle:(id)a2;

@end
