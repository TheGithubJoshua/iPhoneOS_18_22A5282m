@class NSUUID;

@interface MFDatePickerItemIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
