@class NSString;

@interface AVTAnimojiDescriptor : AVTAvatarDescriptor

@property (copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (unsigned char)classIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)encodeInDictionaryRepresentation:(id)a0;
- (id)initWithAnimoji:(id)a0;

@end
