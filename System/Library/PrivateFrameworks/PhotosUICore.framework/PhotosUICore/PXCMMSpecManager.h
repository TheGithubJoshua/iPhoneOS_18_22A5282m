@class PXCMMSpec;

@interface PXCMMSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXCMMSpec *spec;
@property (readonly, nonatomic) unsigned long long activityType;

- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 activityType:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 activityType:(unsigned long long)a2;

@end