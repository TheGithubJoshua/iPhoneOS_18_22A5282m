@class NSSet;

@interface LNValueType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *objectClassesForCoding;

- (Class)objectClass;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (id)metadataClassesForCoding;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
