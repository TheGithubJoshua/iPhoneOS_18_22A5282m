@class HMDManagedObjectCodingModel;

@interface HMDCodingConditionSet : NSObject <NSCopying> {
    HMDManagedObjectCodingModel *_model;
    unsigned long long _bitmask;
}

- (void)addCondition:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)removeCondition:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModel:(id)a0;
- (id)initWithModel:(id)a0 conditions:(id)a1;

@end
