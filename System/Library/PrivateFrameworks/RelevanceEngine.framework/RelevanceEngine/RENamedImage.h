@class NSString, NSBundle;

@interface RENamedImage : REImage

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSBundle *bundle;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 inBundle:(id)a1;

@end
