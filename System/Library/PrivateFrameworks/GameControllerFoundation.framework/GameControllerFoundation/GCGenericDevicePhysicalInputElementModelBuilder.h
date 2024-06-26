@class NSString, NSNumber;

@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, getter=isAnalog) NSNumber *analog;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *symbolName;

- (id)init;
- (unsigned long long)hash;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
