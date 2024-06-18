@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel;

@interface GCGenericDeviceModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) GCGenericDeviceDriverModel *driver;
@property (copy, nonatomic) GCGenericDevicePhysicalInputModel *physicalInput;

- (id)init;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
