@class NSSet;

@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *gamepadEventFields;

- (id)init;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
