@class NSString, CAAnimation;

@interface CAStateAddAnimation : CAStateElement

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) CAAnimation *animation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)keyPath;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)dealloc;
- (void)apply:(id)a0;
- (BOOL)matches:(id)a0;

@end
