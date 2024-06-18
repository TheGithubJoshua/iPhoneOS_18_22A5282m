@interface SidecarService_Signature : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)localizedItemName;

@end
