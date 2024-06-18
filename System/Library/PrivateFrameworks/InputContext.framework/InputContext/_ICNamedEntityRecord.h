@class NSString;

@interface _ICNamedEntityRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long data;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 data:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;

@end
