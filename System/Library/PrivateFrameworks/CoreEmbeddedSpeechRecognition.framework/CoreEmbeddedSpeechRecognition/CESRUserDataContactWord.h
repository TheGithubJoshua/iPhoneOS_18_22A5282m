@class NSDictionary;

@interface CESRUserDataContactWord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *components;
@property (readonly, nonatomic) int frequency;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComponents:(id)a0 frequency:(int)a1;

@end
