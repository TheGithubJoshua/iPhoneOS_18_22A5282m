@class NSNumber, NSString;

@interface HFTVInputControlItemValue : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) BOOL isConfigured;
@property (readonly, nonatomic) BOOL isSelected;

+ (id)valueWithInputName:(id)a0 identifier:(id)a1 isHidden:(BOOL)a2 isSelected:(BOOL)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInputName:(id)a0 identifier:(id)a1 isHidden:(BOOL)a2 isSelected:(BOOL)a3;

@end
