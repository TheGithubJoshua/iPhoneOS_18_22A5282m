@class NSString;

@interface CAStateSetValue : CAStateElement {
    id _value;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id value;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)dealloc;
- (void)apply:(id)a0;
- (void)foreachLayer:(id /* block */)a0;
- (BOOL)matches:(id)a0;

@end
