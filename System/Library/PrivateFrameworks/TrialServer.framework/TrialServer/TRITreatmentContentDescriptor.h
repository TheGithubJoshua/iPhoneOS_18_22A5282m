@class NSString, TRIAppContainer;

@interface TRITreatmentContentDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) TRIAppContainer *container;

+ (id)descriptorWithTreatmentId:(id)a0 container:(id)a1;

- (id)init;
- (BOOL)isEqualToDescriptor:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementContainer:(id)a0;
- (id)initWithTreatmentId:(id)a0 container:(id)a1;

@end
