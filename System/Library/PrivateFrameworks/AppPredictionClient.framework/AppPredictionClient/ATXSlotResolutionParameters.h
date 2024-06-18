@class ATXAction, ATXSlotSet, NSArray;

@interface ATXSlotResolutionParameters : NSObject <NSCopying> {
    ATXAction *_action;
    ATXSlotSet *_slots;
    NSArray *_values;
    unsigned long long _hash;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(id)a0 slots:(id)a1;

@end
