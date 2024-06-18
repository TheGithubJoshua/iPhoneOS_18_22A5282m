@class ISIcon, NSString, NSDictionary, NSURL, NSUUID, NSArray, LSBundleRecord;
@protocol _EXExtensionConfigurationProviding;

@interface _EXExtensionIdentity : NSObject <_EXExtensionConfigurationProviding, NSSecureCoding, _EXExtensionRepresenting>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *extensionPointConfiguration;
@property (readonly) unsigned long long type;
@property (readonly) NSString *internalServiceName;
@property (readonly) NSString *serviceName;
@property (readonly) Class principalClass;
@property (readonly) Class extensionClass;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) Class connectionHandlerClass;
@property (readonly) Class extensionContextClass;
@property (readonly) NSDictionary *requiredHostEntitlements;
@property (readonly) BOOL supportsNSExtensionPlistKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *entitlements;
@property (readonly, getter=isSystemComponent) BOOL systemComponent;
@property (readonly) NSURL *containingURL;
@property (readonly) NSUUID *UUID;
@property (readonly) NSURL *executableURL;
@property (readonly) NSDictionary *sdkDictionary;
@property (readonly) NSDictionary *extensionDictionary;
@property (readonly) unsigned int platform;
@property (readonly) unsigned char userElection;
@property (readonly) unsigned char defaultUserElection;
@property (readonly) NSString *sandboxProfileName;
@property (readonly) NSArray *alternateSandboxProfileNames;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property (readonly) Class extensionContextClass;
@property (readonly) Class hostContextClass;
@property (readonly) unsigned long long enablementState;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSString *localizedName;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) BOOL requiresMacCatalystBehavior;
@property (readonly) BOOL requiresSceneHosting;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSArray *roles;
@property (readonly) ISIcon *icon;
@property (readonly) BOOL requiresLegacyInfrastructure;
@property (readonly) BOOL enabled;
@property (readonly) BOOL unelected;
@property (readonly) BOOL showsInExtensionsManager;
@property (readonly) BOOL canDisable;
@property (readonly) BOOL targetsSystemExtensionPoint;
@property (readonly) BOOL requiresHostToBeContainerApp;
@property (readonly) BOOL spotlightIndexable;
@property (readonly) NSArray *spotlightImporterIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)enableExtension:(id)a0 error:(id *)a1;
+ (BOOL)disableExtension:(id)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (id)icon;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (Class)principalClass;
- (BOOL)enabled;
- (id)sandboxProfileName;
- (id)_init;
- (id)initWithPlugInKitProxy:(id)a0;
- (Class)extensionClass;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)makeXPCConnectionWithError:(id *)a0;
- (id)uniqueIdentifier;
- (BOOL)isEqualToExtension:(id)a0;
- (id)configuration;
- (id)alternateSandboxProfileNames;
- (Class)connectionHandlerClass;
- (id)executableURLWithError:(id *)a0;
- (Class)hostContextClass;
- (id)requiredHostEntitlements;
- (BOOL)requiresHostToBeContainerApp;
- (BOOL)requiresLegacyInfrastructure;
- (BOOL)requiresSceneHosting;
- (id)spotlightImporterIdentifiers;
- (BOOL)spotlightIndexable;
- (BOOL)supportsNSExtensionPlistKeys;
- (BOOL)targetsSystemExtensionPoint;
- (BOOL)unelected;
- (id)xpcOverlayDictionaryOverridingSandboxProfileName:(id)a0 multiInstance:(BOOL)a1 arguments:(id)a2;

@end