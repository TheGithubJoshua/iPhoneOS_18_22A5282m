@class NSString, NSArray, LNStaticDeferredLocalizedString, NSOrderedSet, NSDictionary, LNValueType, LNActionConfiguration, LNActionDescriptionMetadata;

@interface LNActionMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *actionDescription;
@property (readonly, copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, copy, nonatomic) NSString *iconSystemImageName;
@property (readonly, nonatomic) BOOL requiresMDMChecks;
@property (readonly, nonatomic, getter=isSessionStartingAction) BOOL sessionStartingAction;
@property (readonly, copy, nonatomic) NSString *nullableEffectiveBundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) LNActionDescriptionMetadata *descriptionMetadata;
@property (readonly, copy, nonatomic) LNValueType *outputType;
@property (readonly, nonatomic) unsigned long long outputFlags;
@property (readonly, nonatomic) BOOL openAppWhenRun;
@property (readonly, nonatomic) long long authenticationPolicy;
@property (readonly, nonatomic) NSArray *systemProtocols;
@property (readonly, nonatomic) LNActionConfiguration *actionConfiguration;
@property (readonly, copy, nonatomic) NSString *customIntentClassName;
@property (readonly, nonatomic) long long bundleMetadataVersion;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSDictionary *typeSpecificMetadata;
@property (readonly, copy, nonatomic) NSDictionary *shortcutsMetadata;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionMetadataWithParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 effectiveBundleIdentifier:(id)a1 title:(id)a2 description:(id)a3 presentationStyle:(long long)a4 outputType:(id)a5 parameters:(id)a6 systemProtocols:(id)a7 actionConfiguration:(id)a8 typeSpecificMetadata:(id)a9;
- (id)initWithIdentifier:(id)a0 effectiveBundleIdentifier:(id)a1 title:(id)a2 description:(id)a3 presentationStyle:(long long)a4 outputType:(id)a5 parameters:(id)a6 systemProtocols:(id)a7 actionConfiguration:(id)a8 typeSpecificMetadata:(id)a9 iconSystemImageName:(id)a10 shortcutsMetadata:(id)a11;
- (id)initWithIdentifier:(id)a0 effectiveBundleIdentifier:(id)a1 title:(id)a2 description:(id)a3 presentationStyle:(long long)a4 outputType:(id)a5 parameters:(id)a6 systemProtocols:(id)a7 actionConfiguration:(id)a8 typeSpecificMetadata:(id)a9 shortcutsMetadata:(id)a10;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 actionConfiguration:(id)a9 typeSpecificMetadata:(id)a10;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 actionConfiguration:(id)a9 typeSpecificMetadata:(id)a10 customIntentClassName:(id)a11;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 actionConfiguration:(id)a9 typeSpecificMetadata:(id)a10 iconSystemImageName:(id)a11 shortcutsMetadata:(id)a12;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 actionConfiguration:(id)a9 typeSpecificMetadata:(id)a10 iconSystemImageName:(id)a11 shortcutsMetadata:(id)a12 customIntentClassName:(id)a13;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 sessionStartingAction:(BOOL)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 customIntentClassName:(id)a12;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 sessionStartingAction:(BOOL)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 iconSystemImageName:(id)a12 shortcutsMetadata:(id)a13 customIntentClassName:(id)a14;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifiers:(id)a2 bundleMetadataVersion:(long long)a3 title:(id)a4 description:(id)a5 presentationStyle:(long long)a6 outputType:(id)a7 parameters:(id)a8 systemProtocols:(id)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 iconSystemImageName:(id)a12 shortcutsMetadata:(id)a13 customIntentClassName:(id)a14;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifiers:(id)a2 bundleMetadataVersion:(long long)a3 title:(id)a4 description:(id)a5 presentationStyle:(long long)a6 outputType:(id)a7 parameters:(id)a8 systemProtocols:(id)a9 sessionStartingAction:(BOOL)a10 actionConfiguration:(id)a11 typeSpecificMetadata:(id)a12 iconSystemImageName:(id)a13 shortcutsMetadata:(id)a14 customIntentClassName:(id)a15;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifiers:(id)a2 bundleMetadataVersion:(long long)a3 title:(id)a4 description:(id)a5 presentationStyle:(long long)a6 outputType:(id)a7 parameters:(id)a8 systemProtocols:(id)a9 sessionStartingAction:(BOOL)a10 actionConfiguration:(id)a11 typeSpecificMetadata:(id)a12 iconSystemImageName:(id)a13 shortcutsMetadata:(id)a14 customIntentClassName:(id)a15 requiresMDMChecks:(BOOL)a16;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifiers:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 actionConfiguration:(id)a9 typeSpecificMetadata:(id)a10 customIntentClassName:(id)a11;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifiers:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 sessionStartingAction:(BOOL)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 customIntentClassName:(id)a12;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 effectiveBundleIdentifiers:(id)a2 title:(id)a3 description:(id)a4 presentationStyle:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 sessionStartingAction:(BOOL)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 iconSystemImageName:(id)a12 shortcutsMetadata:(id)a13 customIntentClassName:(id)a14;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 bundleMetadataVersion:(long long)a4 title:(id)a5 description:(id)a6 presentationStyle:(long long)a7 outputType:(id)a8 parameters:(id)a9 systemProtocols:(id)a10 actionConfiguration:(id)a11 typeSpecificMetadata:(id)a12 iconSystemImageName:(id)a13 shortcutsMetadata:(id)a14 customIntentClassName:(id)a15;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 bundleMetadataVersion:(long long)a4 title:(id)a5 descriptionMetadata:(id)a6 openAppWhenRun:(BOOL)a7 authenticationPolicy:(long long)a8 outputType:(id)a9 outputFlags:(unsigned long long)a10 parameters:(id)a11 systemProtocols:(id)a12 actionConfiguration:(id)a13 typeSpecificMetadata:(id)a14 customIntentClassName:(id)a15 availabilityAnnotations:(id)a16 shortcutsMetadata:(id)a17;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 bundleMetadataVersion:(long long)a4 title:(id)a5 descriptionMetadata:(id)a6 openAppWhenRun:(BOOL)a7 authenticationPolicy:(long long)a8 outputType:(id)a9 outputFlags:(unsigned long long)a10 parameters:(id)a11 systemProtocols:(id)a12 actionConfiguration:(id)a13 typeSpecificMetadata:(id)a14 customIntentClassName:(id)a15 shortcutsMetadata:(id)a16;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 bundleMetadataVersion:(long long)a4 title:(id)a5 descriptionMetadata:(id)a6 presentationStyle:(long long)a7 authenticationPolicy:(long long)a8 outputType:(id)a9 outputFlags:(unsigned long long)a10 parameters:(id)a11 systemProtocols:(id)a12 actionConfiguration:(id)a13 typeSpecificMetadata:(id)a14 iconSystemImageName:(id)a15 customIntentClassName:(id)a16 shortcutsMetadata:(id)a17;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 bundleMetadataVersion:(long long)a4 title:(id)a5 descriptionMetadata:(id)a6 presentationStyle:(long long)a7 authenticationPolicy:(long long)a8 outputType:(id)a9 parameters:(id)a10 systemProtocols:(id)a11 actionConfiguration:(id)a12 typeSpecificMetadata:(id)a13 iconSystemImageName:(id)a14 customIntentClassName:(id)a15 shortcutsMetadata:(id)a16;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 title:(id)a2 description:(id)a3 presentationStyle:(long long)a4 outputType:(id)a5 parameters:(id)a6 systemProtocols:(id)a7 actionConfiguration:(id)a8 typeSpecificMetadata:(id)a9 customIntentClassName:(id)a10;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 title:(id)a2 descriptionMetadata:(id)a3 openAppWhenRun:(BOOL)a4 authenticationPolicy:(long long)a5 outputType:(id)a6 outputFlags:(unsigned long long)a7 parameters:(id)a8 systemProtocols:(id)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 customIntentClassName:(id)a12;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 title:(id)a2 descriptionMetadata:(id)a3 presentationStyle:(long long)a4 authenticationPolicy:(long long)a5 outputType:(id)a6 outputFlags:(unsigned long long)a7 parameters:(id)a8 systemProtocols:(id)a9 actionConfiguration:(id)a10 typeSpecificMetadata:(id)a11 customIntentClassName:(id)a12;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 title:(id)a2 descriptionMetadata:(id)a3 presentationStyle:(long long)a4 authenticationPolicy:(long long)a5 outputType:(id)a6 parameters:(id)a7 systemProtocols:(id)a8 actionConfiguration:(id)a9 typeSpecificMetadata:(id)a10 customIntentClassName:(id)a11;
- (id)initWithIdentifier:(id)a0 title:(id)a1 description:(id)a2 presentationStyle:(long long)a3 outputType:(id)a4 parameters:(id)a5 systemProtocols:(id)a6 actionConfiguration:(id)a7;
- (id)mangledTypeNameForBundleIdentifier:(id)a0;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)a0 mangledTypeName:(id)a1;

@end