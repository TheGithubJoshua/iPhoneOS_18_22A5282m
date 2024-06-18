@interface SidecarService_Scanner : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)makeRequest;
- (id)localizedItemName;

@end
