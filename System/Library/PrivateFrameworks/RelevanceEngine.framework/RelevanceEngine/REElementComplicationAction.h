@class NSString;

@interface REElementComplicationAction : REElementAction

@property (readonly, nonatomic) NSString *slotIdentifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSlotIdentifier:(id)a0;
- (void)_performWithContext:(id)a0;

@end
