@class NSSet, GCGenericDeviceInputEventDriverModel, GCGenericDeviceRumbleModel;

@interface GCGenericDeviceDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *elements;
@property (copy, nonatomic) GCGenericDeviceInputEventDriverModel *input;
@property (copy, nonatomic) GCGenericDeviceRumbleModel *rumble;

- (id)init;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
