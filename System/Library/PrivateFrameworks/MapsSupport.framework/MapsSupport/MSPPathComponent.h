@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *originIdentifier;
@property (readonly, nonatomic) unsigned short index;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIndex:(unsigned short)a0 originIdentifier:(id)a1;

@end
