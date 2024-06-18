@interface SidecarService_Camera : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)localizedItemName;
- (id)mutableRequestMessage;

@end
