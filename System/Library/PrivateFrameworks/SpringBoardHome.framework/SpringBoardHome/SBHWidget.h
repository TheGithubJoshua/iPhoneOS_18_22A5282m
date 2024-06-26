@class NSString;

@interface SBHWidget : NSObject <CHSWidgetPersonality, SBLeafIconDataSource, NSCopying, NSSecureCoding, BSDescriptionProviding> {
    NSString *_containerBundleIdentifier;
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long suggestionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;

- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (unsigned long long)priorityForIcon:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)matchesPersonality:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)resetDisplayName;
- (id)initWithKind:(id)a0 extensionBundleIdentifier:(id)a1;
- (id)copyWithSuggestionSource:(long long)a0;
- (id)succinctDescription;
- (BOOL)iconSupportsConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)initWithUniqueIdentifier:(id)a0 kind:(id)a1 extensionBundleIdentifier:(id)a2 containerBundleIdentifier:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithUniqueIdentifier;
- (id)initWithKind:(id)a0 extensionBundleIdentifier:(id)a1 containerBundleIdentifier:(id)a2;

@end
