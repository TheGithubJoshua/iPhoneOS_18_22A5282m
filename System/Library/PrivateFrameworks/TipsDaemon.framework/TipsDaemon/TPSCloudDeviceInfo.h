@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *minOSVersion;
@property (copy, nonatomic) NSString *maxOSVersion;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithModel:(id)a0;

@end
